// Add Two Number

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Base case
        if(l1 == NULL || l2 == NULL){
            return NULL;
        }
        // Both will point the head of the linked list
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        // newlist head and tail

        ListNode* newhead = NULL;
        ListNode* newtail = NULL;

        // for adding 
        int sum = 0;
        int carry = 0;
        int digits = 0;

        while(temp1 != NULL || temp2 != NULL || carry != 0L){

            if(temp1 != NULL && temp2 != NULL){
                sum += temp1->val + temp2->val;

                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            else if(temp1 != NULL && temp2 == NULL){
                sum += temp1->val;
                temp1 = temp1->next;
            }
            else if(temp1 == NULL && temp2 != NULL){
                sum += temp2->val;
                temp2 = temp2->next;

            }
            else{
                sum = carry;
            }

            digits = sum % 10;

            ListNode* newnode = new ListNode(digits);

            if(newhead == NULL && newtail == NULL){
                newhead = newnode;
                newtail = newnode;
            }
            else{
                // add node in the list
                newtail->next = newnode;
                newtail = newnode;
            }

            carry = sum / 10;
            sum = carry;
        }

        ListNode* ans = newhead;

        return ans;
    }
};
