class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int i = 0, j = 1, k = 2;
        int len = nums.size();
        if(len<3){//if len is less than 3 return false
            return false;
        }
        //take two pointers to track nums
        int one = INT_MAX, two = INT_MAX;
        for(int num : nums){
            if(num<one){//find first num which is smaller than INT_MAX
                one = num;
            }
            else if((one<num) && (num<two)){ //find next num which is greater than one
                two = num;
            }
            else if(num>two){
                return true;
            }
        }
        return false;
    }
};