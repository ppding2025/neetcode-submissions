class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,float> m1;
        unordered_map<char,float> m2;
        int i=0;
        
        for (char c:s){
           
           if (m1.count(c)){
              m1[c]=m1[c]+1;
              

           }

           else{
           
           m1[c]=1;
           
           }

        }
        for (char c:t){
           
           if (m2.count(c)){
              
              m2[c]=m2[c]+1;

           }
           else{
           m2[c]=1;
           }

        }

        return m1==m2;

    }
};
