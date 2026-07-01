class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> sc;
        int maxLength=0;
        int currentLength=0;
        int currentStart=0;
        int removePoint=0;
        
        for (int i=0; i<s.size(); ++i){
           
           if(sc.count(s[i])){
                
                removePoint=currentStart;
                currentStart=sc[s[i]]+1;
                for (auto it = sc.begin(); it != sc.end(); ) {
                if (it->second >= removePoint && it->second <= currentStart-1) {
                   it = sc.erase(it);
                } 
                 else {
                 ++it;
                }
            }
                
           }
           
           sc[s[i]]=i;
           currentLength=i-currentStart+1;
           if (currentLength>maxLength){
              maxLength=currentLength;

           }
        } 
        return maxLength;
    }
};
