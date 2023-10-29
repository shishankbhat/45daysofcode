class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) {
            return head;
        }
        ListNode* preptr = NULL;
        ListNode* currptr = head;

        while (currptr != NULL) {
            if (currptr->val == val) {
                ListNode* temp = currptr;
                if (preptr != NULL) {
                    preptr->next = currptr->next;
                } else {
                    head = currptr->next; // Update head if the value to remove is in the first node
                }
                currptr = currptr->next;
                delete temp;
            } else {
                preptr = currptr;
                currptr = currptr->next;
            }
        }

        return head;
    }
};
