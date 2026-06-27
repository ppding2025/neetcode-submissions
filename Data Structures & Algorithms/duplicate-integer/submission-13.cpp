class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> list;
        for (int i=0; i<nums.size(); ++i){

            
              list[nums[i]]=i;
            
        }
        return nums.size()!=list.size();
    }
};