class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int i = 0, j = 1, k = 2;
        int len = nums.size();
        if(len<3){
            return false;
        }
        int one = INT_MAX, two = INT_MAX;
        for(int num : nums){
            if(num<one){
                one = num;
            }
            else if((one<num) && (num<two)){
                two = num;
            }
            else if(num>two){
                return true;
            }
        }
        return false;
    }
};