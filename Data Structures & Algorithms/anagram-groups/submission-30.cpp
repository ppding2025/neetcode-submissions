class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
            
        for (const string& s:strs){
              
              vector<int> vt(26,0);
              for (char c:s){
                  
                  vt[c-'a']++;

              }
              string key=to_string(vt[0]);
              for (int i=1;i<vt.size(); ++i){
                  key+=','+to_string(vt[i]);


              }
              mp[key].push_back(s);


        }
        vector<vector<string>> ans;
        for (const auto& it:mp){

              ans.push_back(it.second);


        }
        return ans;
    }
};
