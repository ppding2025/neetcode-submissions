class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> mp;
            
        for (const string& s:strs){
              
              vector<int> vt(26,0);
              for (char c:s){
                  
                  vt[c-'a']++;

              }
              mp[vt].push_back(s);

        }
        vector<vector<string>> ans;
        for (const auto& it:mp){

              ans.push_back(it.second);


        }
        return ans;
    }
};
