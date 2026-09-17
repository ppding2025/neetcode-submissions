class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        int surfix=1;
        vector<int> output(n,1);
        
        
        for (int i=1; i<nums.size(); ++i){
              output[i]=output[i-1]*nums[i-1];
              
        }
        for (int i=n-1; i>=0; --i){
              
              output[i]*=surfix;
              surfix*=nums[i];



        }

        return output;


    }
};
