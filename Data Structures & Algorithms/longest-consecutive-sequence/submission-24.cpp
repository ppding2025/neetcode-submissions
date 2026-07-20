class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if (nums.empty()){

              return 0;

        }
        
        int maxlength=1;
        int current=1;
        sort(nums.begin(), nums.end());

         for (int i=0; i+1<nums.size(); ++i){

             if (nums[i+1]-nums[i]==1){
                  
                  current++;
                  maxlength=max(maxlength,current);
                  

             }
             else if(nums[i+1]==nums[i]){

                continue;
             }

             else{

                current=1;

             }

         }
         return maxlength;
    }
};
