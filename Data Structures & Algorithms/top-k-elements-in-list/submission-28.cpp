class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int n=nums.size();
        vector<vector<int>> bucket(n+1);
       

        for (int n:nums){

             freq[n]++;

        }
        unordered_set<int> filter;
        for (int v:nums){

              if (!filter.count(v)){

                   bucket[freq[v]].push_back(v);
                   filter.insert(v);
              }



        }
        vector<int> ans;


        for (int i=n; i>=1; --i){

            for (int v:bucket[i]){
               ans.push_back(v);

               if (ans.size()==k){

                    return ans;
               }
                  


            }

        


        }
        return ans;
    }
};
