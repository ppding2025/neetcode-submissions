class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        

        map<vector<int>,vector<string>>mp;
        vector<vector<string>> ans;
        for (const string& s:strs){
            vector<int> count(26,0); 
            for (char c:s){

                 count[c-'a']++;
                 

            } 
                mp[count].push_back(s);



        }
        for (const auto& it: mp){

               ans.push_back(it.second);

        }

     return ans;

    }
};
