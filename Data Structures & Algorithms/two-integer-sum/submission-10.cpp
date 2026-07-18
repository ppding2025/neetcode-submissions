class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> listNeed;
 
        for (int i=0; i<nums.size(); ++i) {

              if (listNeed.count(nums[i])){

                return {listNeed[nums[i]],i};
              }

              int need= target-nums[i];

              listNeed[need]=i;

        }

        return {};

    }
};
