class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        if (s1.size()>s2.size()){

            return false;
        }
        
        for (int i=0; i<s1.size(); ++i){
            mp1[s1[i]]++;
        }
        
        
        
        for (int j=0; j<s1.size(); ++j){
            
            mp2[s2[j]]++;


        }    

        int n=s1.size();
        for (int k=0 ; k<=s2.size()-n; ++k){

             if (mp1==mp2){

                return true;
             }
             
            
             mp2[s2[k]]--;
             
             if( mp2[s2[k]]==0){
               mp2.erase(s2[k]);

             }
             if (k + n < s2.size()){
             mp2[s2[k+n]]++;
             }

        }    
        
        return false;
        
        


        


    }
};
