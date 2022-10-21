class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //use map to store index and value
        unordered_map<int, int> mp;
        for(int i = 0; i<nums.size(); i++){
            //simply check whether mp has that value already or not and check diff of indices
            if(mp.find(nums[i]) != mp.end() && (i - mp[nums[i]] <= k)){
              return true;
            }
            mp[nums[i]] = i;
        }
        
       return false; 
    }
};