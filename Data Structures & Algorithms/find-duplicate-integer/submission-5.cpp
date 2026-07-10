class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=0;
        int fast=0;
        int slow2=0;
        while(true){

            slow=nums[slow];
            fast=nums[nums[fast]];
          if (slow==fast){

            break;
          }


        }
        while(slow2!=slow){

            slow=nums[slow];
            slow2=nums[slow2];


        }
        
        return slow2;

    }
};
