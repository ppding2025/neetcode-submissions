class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;

        for (string s: strs){
           vector<int> pattern(26,0);
           
           for (char c:s){

              pattern[c-'a']++;


           }

           string anagram;
           for (int i:pattern){
               
               anagram+=to_string(i)+','; 

           } 

           mp[anagram].push_back(s);
        } 

        for (auto &it:mp){
            
            ans.push_back(it.second);

        }
        return ans;
    }
};
