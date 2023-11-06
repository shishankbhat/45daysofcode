class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }

        invertTree(root->left); // call left subtree
        invertTree(root->right); // call right subtree

        // swap node
        TreeNode* temp = root->left;
        root->left = root->right;
        root-> right = temp;

        return root;
    }
};
