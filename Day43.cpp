class Solution {
    int findlh(TreeNode* root){
        int cnt = 0;
        while(root){
            cnt++;
            root = root->left;
        }

        return cnt;
    }

    int findrh(TreeNode* root){
        int cnt = 0;
        while(root){
            cnt++;
            root = root->right;
        }

        return cnt;
    }
public:
    int countNodes(TreeNode* root) {
        if(root == NULL){
            return 0;
        }

        int lh = findlh(root);
        int rh = findrh(root);

        if(lh == rh){
            return (pow(2,lh))-1;
        }
        else{
            return 1 + countNodes(root->left) + countNodes(root->right);
        }
    }
};
