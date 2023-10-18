class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int st = 0;
        int end = row*col - 1;

        while(st <= end){
            int mid = st + (end - st) / 2;
            int temp = matrix[mid/col][mid%col];
            if(temp == target){
                return true;
            }
            else if(temp > target){
                end = mid-1;
            }
            else
                st = mid  + 1;
        }
        return false;
    }
};
