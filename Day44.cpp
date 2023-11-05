class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int row = grid.size()-1;
        int  col = grid[0].size()-1;
        
        int ans = 0;
        int res = 0;
        for(int i = 0; i<= row; i++){
            int cnt = 0;
            for(int j = 0; j <=col; j++){
                if(grid[i][j] == 1){
                    cnt++;
                }
            }
            if(cnt > ans){
                ans = cnt;
                res = i;
            }
        }
        
        return res;
    }
};
