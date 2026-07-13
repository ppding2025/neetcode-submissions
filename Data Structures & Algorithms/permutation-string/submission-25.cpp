class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for (char c:s1){

             mp1[c]++;


        }

        int l=0;
        int r;
        for (r=0;r<s1.size();++r){

              
              mp2[s2[r]]++;
        }
        r=s1.size();    
        while (r<=s2.size()){
        if (mp1==mp2){
            return true;
        }
              
              mp2[s2[l]]--;
              if (mp2[s2[l]]==0){

                mp2.erase(s2[l]);
              }

              l++;
              mp2[s2[r]]++;
              r++;
        }
       
        return false;
        





    }
};
