class Solution {
public:

    string encode(vector<string>& strs) {
          
          string encodedStr;

        for (int i=0; i<strs.size(); i++){
             
             encodedStr+= to_string(strs[i].size());
             encodedStr.push_back('%');
             for (char c: strs[i]){
                encodedStr.push_back(c);


             }



        }
        return encodedStr;

    }

    vector<string> decode(string s) {
         int i=0;
         vector<string> decode;
         
     while (i<s.size()){
         int j=i;
     while(s[j]!='%'){

        j++;
     }

     
     int len=stoi(s.substr(i,j-i)); 
     decode.push_back(s.substr(j+1,len));

     i=j+1+len; 
          
      
        
    }

    return decode;
    }
};
