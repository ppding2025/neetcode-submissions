class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<vector<int>> bucket(nums.size()+1);
        vector<int> ans;
        for (int n:nums){       //get the frequency of each int values in the hashmap
            
             freq[n]++;


        }

        for (const auto& it: freq){
           
             bucket[it.second].push_back(it.first);

        }
        
        
       for (int i=bucket.size()-1; i>=1; --i){
        
        for  (int e:bucket[i]){

             ans.push_back(e);
             if (ans.size()==k){

                return ans;

             }

        }
        
        

    }
    }
};
