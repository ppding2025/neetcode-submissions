class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int,int> ct;

        int l=0;
        int result=0;
        int big=0;
        for (int r=0; r<s.size(); r++){
             ct[s[r]]++;
             big = max(big, ct[s[r]]);
             while(r-l+1-big>k){
                ct[s[l]]--;
                l++;
                
               
             }
           
           
 
           result=max(result,r-l+1);

        }

        return result;

    }
};
