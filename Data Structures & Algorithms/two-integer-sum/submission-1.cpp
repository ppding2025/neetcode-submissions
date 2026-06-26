class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> needs;
        int need;                           
        for (int i=0; i<nums.size(); ++i){
            if (needs.count(nums[i])){
                return {needs[nums[i]],i};




            } 
            need=target-nums[i];

            needs[need]=i;

           




        }
        return{-1,-1};


    }
};
