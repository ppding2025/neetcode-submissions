class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> numSet(nums.begin(), nums.end());
        int longest=0;
        for (int i=0; i<nums.size(); ++i){
                
              if ( !numSet.count(nums[i]-1)){
                 int length=0;

                 while(numSet.count(nums[i]+length)){

                       length++;

                }

                longest=max(longest,length);
                }


        }

        return longest;

    }
};
