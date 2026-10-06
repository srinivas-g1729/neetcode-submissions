class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
      int minHeight = INT_MAX;
      int maxWater = INT_MIN;
      int left = 0;
      int right = n - 1;
    while(left < right){
        minHeight = min(heights[left],heights[right]);
        int width = right - left;
        maxWater  = max(maxWater,width * minHeight);
        if(heights[left] < heights[right]){
            left++;
        }
        else{
            right--;
        }
    }
      return maxWater;
    }
};
