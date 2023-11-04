class Solution {
    void mark_parent(TreeNode* node,unordered_map<TreeNode*,TreeNode*> &parent_track){
        queue<TreeNode*> q;
        q.push(node);
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();

            if(curr->left){
                parent_track[curr->left] = curr;
                q.push(curr->left);
            }

            if(curr->right){
                parent_track[curr->right] = curr;
                q.push(curr->right);
            }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        // mapping of parent node

        unordered_map<TreeNode*,TreeNode*> parent_track;

        mark_parent(root,parent_track);

        queue<TreeNode*> q;
        q.push(target);
        unordered_map<TreeNode*,bool> visited;
        visited[target] = true;
        int dis = 0;
        while(!q.empty()){
            int size = q.size();
            if(dis == k){
                break;
            }
            dis++;

            for(int i = 0; i < size; i++){
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left && !visited[curr->left]){
                    q.push(curr->left);
                    // mark visited
                    visited[curr->left] = true;
                }

                //right
                if(curr->right && !visited[curr->right]){
                    q.push(curr->right);
                    // mark visited
                    visited[curr->right] = true;
                }

                //parent

                if(parent_track[curr] && !visited[parent_track[curr]]){
                    q.push(parent_track[curr]);
                    visited[parent_track[curr]] = true;
                }
            }
        }

        vector<int> ans;
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            ans.push_back(node->val);
        }

        return ans;
    }
};
