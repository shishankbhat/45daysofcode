class Solution {
public:
    int solve(TreeNode* root, int &ans){
        if(root == NULL){
            return 0;
        }

        int l = max(0,solve(root->left,ans));
        int r = max(0,solve(root->right,ans));

        ans = max(ans,root->val+l+r);

        return root->val + max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        int ans  = INT_MIN;
        solve(root,ans);
        return ans;
    }
};
