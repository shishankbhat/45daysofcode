class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i = 0;
        int j = 0;
        vector<int> ans;
        while(i < m && j < n){
            // for check the duplicate val if found then skip forward
            if(i > 0 && nums1[i] == nums1[i-1]){
                i++;
                continue;
            }

            if(nums1[i] == nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] > nums2[j]){
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};
