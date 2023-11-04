class Solution {
public:
    void rightview(TreeNode* node, int level, vector<int> &ans){
        if(node == NULL){
            return;
        }

        if(level == ans.size()){
            ans.push_back(node->val);
        }
        rightview(node->right,level+1,ans); // for left view we will swap both these function
        rightview(node->left,level+1,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        rightview(root,0,ans);
        return ans;
    }
};
