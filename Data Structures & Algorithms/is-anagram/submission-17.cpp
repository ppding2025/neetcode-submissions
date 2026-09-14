class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> anamap1;
        unordered_map<char,int> anamap2;
        
        for (char c:s){
              
             anamap1[c]++;



        }
        for (char c:t){
             anamap2[c]++;


        }

        return anamap1==anamap2;



    }
};
