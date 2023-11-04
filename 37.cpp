class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL || root == p || root == q){
            return root;
        }
        TreeNode* rl = lowestCommonAncestor(root->left,p,q);
        TreeNode* rr = lowestCommonAncestor(root->right,p,q);

        if(rl == NULL)
            return rr;
        else if(rr == NULL)
            return rl;
        else
            return root;
    }
};
