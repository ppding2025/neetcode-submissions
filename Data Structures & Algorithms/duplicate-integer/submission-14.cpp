class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> list;
        for (int i=0; i<nums.size(); ++i){

            

            if (list.count(nums[i])){ 
                return true;
            }
            
            list[nums[i]]=i;

        }
        return false;
        
    }
};