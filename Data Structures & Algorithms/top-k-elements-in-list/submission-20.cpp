class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<pair<int,int>> vt;
        vector<int> ans;
          for (int num:nums){

                 mp[num]++;

          }

         for (const auto& it: mp){

              vt.push_back({it.second,it.first});


         }
         sort(vt.begin(),vt.end(),greater());
         
         int i=0;
         while (i<k){
               
                
                   ans.push_back(vt[i].second);
                   i++; 
        }
               
         


          return ans;

    }
};
