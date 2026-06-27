class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool> list;
        for (int i=0; i<nums.size(); ++i){

            
              list[nums[i]]=true;
            
        }
        return nums.size()!=list.size();
    }
};