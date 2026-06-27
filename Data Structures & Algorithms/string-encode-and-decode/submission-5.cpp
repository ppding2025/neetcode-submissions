class Solution {
public:

    string encode(vector<string>& strs) {
     string code;
     for (string s:strs){

        code=code.append(to_string(s.length())+"%"+s);
       }

       return code;
    }

 

    vector<string> decode(string s) {

        
        
        
        vector<string> decode;
        int i = 0;

        while (i < s.size()) {

         // read the number
        int j = i;
        
        
        while (s[j] != '%'){
           j++;
        }
        int len = stoi(s.substr(i, j - i));

        // extract the word
        decode.push_back(s.substr(j + 1, len));

        i = j + 1 + len;
        }

        return decode;
    }
        
};
