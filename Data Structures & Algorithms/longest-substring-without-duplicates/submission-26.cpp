class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        unordered_set<char> st;
        int r;
        int length=0;
        for (r=0; r<s.size(); ++r){
              
              while (st.count(s[r])){
                   st.erase(s[l]);
              
                   l++;
                   
              }
                  
              st.insert(s[r]);
              length=max(length,r-l+1);
              
        }
        return length;
            

        }

       
    
};
