// 3 sum leet code

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > ans;
        set<vector<int> >s;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int target = 0;

        for(int i = 0; i < n; i++){
            int j = i+1;
            int k = n-1;

            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];

                if(sum == target){
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum > target){
                    k--;
                }
                else{
                    j++;
                }
            }
           
        }
            for(auto i : s){
                ans.push_back(i);
            }
        return ans;
    }
};
