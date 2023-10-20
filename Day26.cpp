class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int st = 0;
        int end = n - 1;
        int max_water_area = 0;
        while(st < end){
            int width = end - st;

            // Because height of two container can be equal or less than but not more than another one 
            int curr_water = min(height[st],height[end]);

            int curr_water_area  = width * curr_water;

            max_water_area = max(max_water_area,curr_water_area);

            if(height[st] > height[end]){
                end--;
            }
            else{
                st++;
            }
        }

        return max_water_area;
    }
};
