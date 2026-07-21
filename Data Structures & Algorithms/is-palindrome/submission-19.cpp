class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int r=s.size()-1;
        while (l<r){
            
            
            
            
            while (l<s.size()&&!isalnum(s[l])){
 
                l++;

            }
            while  (r>=0&&!isalnum(s[r])){

               r--;
            }
           
              if (tolower(s[l])!=tolower(s[r])){
                 return false;
            }
              l++;
              r--;


           }

        return true;
    }
};
