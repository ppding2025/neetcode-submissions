class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int result=0;

        set<char> st;


        for (int r=0; r<s.size(); ++r){

             
             while(st.count(s[r])){
                st.erase(s[l]);
                l++;
                
             }
            st.insert(s[r]);
            result=max(result,r-l+1);
        }
        return result;


    }
};
