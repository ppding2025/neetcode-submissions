class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
      
        for (int i=0; i<nums.size(); ++i){
             
             if (mp.count(nums[i])){

                return {mp[nums[i]],i};
             }
             int need= target- nums[i];

             mp[need]=i;
             

        }

        return {-1,-1};

    }
};
