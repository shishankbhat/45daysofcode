class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* currptr = head->next;
        ListNode* preptr = head;
        while(currptr != nullptr){
            if(preptr-> val == currptr-> val){
                ListNode* temp = currptr;
                currptr = currptr->next;
                preptr->next = currptr;
                delete temp;
            }
            else{
                preptr= currptr;
                currptr = currptr->next;
            }
        }

        return head;
    }
};
