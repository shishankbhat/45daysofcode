class Solution {
    
    int findmax(unordered_map<Node*,Node*> &pm, Node* target){
        queue<Node*> q;
        q.push(target);
        map<Node*,bool> visited;
        visited[target] = true;
        int ans = 0;
        
        while(!q.empty()){
            int size = q.size();
            int flag = 0;
            
            for(int i = 0; i < size; i++){
                Node* curr = q.front();
                q.pop();
                
                if(curr->left && !visited[curr->left]){
                    q.push(curr->left);
                    flag = 1;
                    visited[curr->left] = true;
                }
                
                if(curr->right && !visited[curr->right]){
                    q.push(curr->right);
                    flag = 1;
                    visited[curr->right] = true;
                }
                
                if(pm[curr] && !visited[pm[curr]]){
                    q.push(pm[curr]);
                    visited[pm[curr]] = 1;
                    flag = 1;
                }
                
            }
            
            if(flag == 1)
                ans++;
        }
        
        return ans;
    }
    Node* parent_mpp(unordered_map<Node*,Node*>& pm, int target, Node* node){
        queue<Node*> q;
        q.push(node);
        Node* res;
        while(!q.empty()){
            Node* curr = q.front();
            q.pop();
            
            if(curr->data == target){
                res = curr;
            }
            
            if(curr->left){
                pm[curr->left] = curr;
                q.push(curr->left);
            }
            if(curr->right){
                pm[curr->right] = curr;
                q.push(curr->right);
            }
        }
        
        return res;
        
    }
  public:
    int minTime(Node* root, int start) 
    {
        unordered_map<Node*,Node*> pm;
        Node* target = parent_mpp(pm,start,root);
        
        return findmax(pm,target);
    }
};
