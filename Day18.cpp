class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        if(k <= 1){
            return 0;
        }
        int n = nums.size();
        int cnt = 0;
        long long ans = 1;
        int j = 0;
        for(int i = 0; i < n; i++){
            ans *= nums[i];
            while(ans >= k){
                ans /= nums[j];
                j++;
            }
            cout << cnt << " ";
            cnt += (i-j + 1);
            
        }
    return cnt;
    }
};
