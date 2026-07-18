class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> freq;
        

        for (int i=0; i<strs.size(); ++i){
        vector<int> count(26,0);
           for (char c:strs[i]){

                count[c-'a']++;
            }

        string key=to_string(count[0]); 
        for (int j=1; j<count.size(); ++j){

               key+=','+to_string(count[j]);


        }

        freq[key].push_back(strs[i]);

        }
        vector<vector<string>> ans;
        for (const auto& it:freq){

            ans.push_back(it.second);

                


            }


        
        return ans;


    }
};
