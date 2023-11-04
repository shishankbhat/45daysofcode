class Solution {
    void levelorder(TreeNode* node, vector<vector<int>> &ans){
        if(node == NULL)
            return ;
        
        queue<TreeNode*> q;
        q.push(node);

        while(!q.empty()){
            int size = q.size();
            vector<int> leveldata;
            for(int i = 0; i < size; i++){
                TreeNode* temp = q.front();
                q.pop();
                leveldata.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                
            }
            ans.push_back(leveldata);   
        }
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
         vector<vector<int>> ans;
        if(root == NULL){
            return ans;
        }

        levelorder(root,ans);

        return ans;
    }
