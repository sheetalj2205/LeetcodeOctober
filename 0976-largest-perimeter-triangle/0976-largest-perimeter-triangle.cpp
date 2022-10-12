class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        //first recall the basic property about triangle that sum of any two sides should be greater than third side a+b>c
        //now as you want the largest perimeter first sort the array then iterate it from the last to get max peri satisfying the condition
        sort(nums.begin(), nums.end());
        for(int i = nums.size()-1; i>=2; i--){
            if(nums[i] < nums[i-1]+nums[i-2]){
                return nums[i]+nums[i-1]+nums[i-2];
            }
        }
        return 0;
    }
};