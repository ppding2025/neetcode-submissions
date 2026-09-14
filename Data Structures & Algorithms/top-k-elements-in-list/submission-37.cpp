class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n=nums.size();
        unordered_map<int,int> mp;
        vector<vector<int>> bucket(n+1);
        vector<int> ans;
        for (int key:nums){
            mp[key]++;
            


        }

        for (auto& it:mp){

            bucket[it.second].push_back(it.first);

        }
        

        for (int i=n; i>=1; --i){
             
             for (int e:bucket[i]){

                ans.push_back(e);
             }
             
             if (ans.size()==k){
                return ans;
             }
        }
        
        
    }
};
