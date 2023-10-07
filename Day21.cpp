// max sum of k sum pair
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        int i = 0;
        int  j = n-1;
        int ans = 0;
        while(i<j){
            int sum = nums[i] + nums[j];
            if(sum == k){
                i++;
                j--;
                ans += 1;
            }
            else if(sum > k){
                j--;
            }
            else{
                i++;
            }
        }

        return ans;
    }
};
