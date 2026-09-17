class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for (const string& s:strs){
            
            encoded+=to_string(s.size())+'%'+s;


        }
        return encoded;
    }

    vector<string> decode(string s) {
        
            int l=0;
            int r=0;
            vector<string> decoded;
            while (r<s.size()){
            
            while (s[r]!='%'){
                ++r;
            } 
            int size=stoi(s.substr(l,r-l));
            decoded.push_back(s.substr(r+1,size));
            r=r+size+1;
            l=r;

            }
        return decoded;
    }
          


    
};
