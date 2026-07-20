class Solution {
public:

    string encode(vector<string>& strs) {
          string encoded;
          for (string s:strs){
              int len=s.size();
               
               encoded+=to_string(len)+'%'+s;   
                 
               


          }
          return encoded;
    }

    vector<string> decode(string s) {
          
          vector<string> decoded;
          int l=0;
          int r=0;

          while (r<s.size()){
          while (s[r]!='%'){

            r++;
          }
         string num=s.substr(l,r-l);
         int n=stoi(num);
         decoded.push_back(s.substr(r+1,n));

          
          r=r+n+1;
          l=r;
          }
        return decoded;
    }
};
