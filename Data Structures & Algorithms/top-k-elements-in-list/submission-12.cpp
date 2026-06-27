class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int> mp;
         vector<vector<int>> list(nums.size() + 1);
         vector<int> ans;
         int i=0;
         
         for (int num:nums){

                mp[num]++;
                
        }
        
         for (auto it : mp) {
            list[it.second].push_back(it.first);
        }
        
        for (i=nums.size(); i>=1; i--){
            for (int n: list[i]){
                     ans.push_back(n);
                     if (ans.size()==k){
                        return ans;
                     }

            }




        }
             
        return ans;


    }
};
