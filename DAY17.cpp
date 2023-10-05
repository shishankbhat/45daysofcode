// merge k sorted list
class Solution {
    ListNode* merge(ListNode* &left, ListNode* &right){
    if(left == NULL){
        return right;
    }
    if(right == NULL){
        return left;
    }
    // create a dummmy node
    ListNode* ans = new ListNode(-1);
    ListNode* temp = ans;
    while(left != NULL && right != NULL){
        if(left -> val < right -> val){
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else{
            temp-> next = right;
            temp = right;
            right = right-> next;
        }
    }

    while(left !=NULL){
        temp -> next = left;
        temp = left;
        left = left -> next;
    }

    while(right != NULL){
        temp-> next = right;
        temp = right;
        right = right-> next;
    }

    return ans->next;
}
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if (n == 0) {
            return NULL;
        }
        // Merge the lists using a divide-and-conquer approach
        while (n > 1) {
            for (int i = 0; i < n / 2; ++i) {
                cout << n - 1 - i <<" "<< n << endl;
                lists[i] = merge(lists[i], lists[n - 1 - i]);
            }
            n = (n + 1) / 2; // Update the number of lists
        }

        // for(int i = 0; i < n-1; i++){
        //     lists[i] = merge(lists[i], lists[i+1]);
        // }
        return lists[0];
    }
};
