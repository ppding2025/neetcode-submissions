class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> pool;
        
        int maxlength=0;
        for (int n:nums){

             pool.insert(n);


        }

        for (int i=0; i<nums.size(); ++i){
             
             if (pool.count(nums[i]-1)){
                 continue;
             }
             int length=0;
             length++;
             while (pool.count(nums[i]+length)){

                length++;
             }
             maxlength=max(maxlength, length);
        }

        return maxlength;

    }
};
