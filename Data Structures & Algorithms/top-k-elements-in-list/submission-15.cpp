class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<pair<int, int>> list;
         vector<int> ans;
       
         
         for (int num:nums){

                mp[num]++;
                      
        }

          for (auto it: mp){

                list.push_back({it.first,it.second});
                
            }

            sort(list.begin(),list.end(),[](auto a, auto b){

                  return a.second>b.second;


            });
        
            for (int i=0; i<k ;i++){

                ans.push_back(list[i].first);

            }

            return ans;





    }
};
