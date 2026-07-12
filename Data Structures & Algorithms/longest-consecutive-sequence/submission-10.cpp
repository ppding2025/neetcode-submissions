class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int longs=1;
        int current=1;

        if (nums.empty()){

            return 0;
        }
        
        for (int i=0; i<nums.size()-1; ++i){
   
              if (nums[i+1]==nums[i]){

                continue;
              }

              if (nums[i+1]-nums[i]==1){

                 current++;
                 longs=max(longs,current);

              }
              else{

                 current=1;


              }

        }

        return longs;
    }
};
