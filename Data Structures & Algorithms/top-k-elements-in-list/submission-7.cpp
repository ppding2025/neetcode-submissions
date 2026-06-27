class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int> mp;
         vector<vector<int>> list(nums.size()+1);
         vector<int> ans;
         int i=0;
         
         for (int num:nums){

                mp[num]++;
                
        }
        
        while(i<=nums.size()){
              for (auto it:mp){
                 if (it.second==i){
                    list[i].push_back(it.first);

                 }

             

              }
        
            i++;
        
        }
        
        for (i=nums.size(); i>=1; i--){
            for (int n: list[i]){
                     ans.push_back(n);
                     if (ans.size()==k){
                        return ans;
                     }

            }




        }
             



    }
};
