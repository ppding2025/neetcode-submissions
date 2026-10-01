class Solution {
public:
    bool isValid(string s) {
         stack<char> brackets;
         unordered_map<char,char> mp={{'(',')'},{'{','}'},{'[',']'}};
         for (char c:s){
            if (c=='('||c=='{'||c=='['){
               brackets.push(c);

            }

            else{
               
               if (brackets.empty()){

                return false;
               }
               char left=brackets.top();
               if (c!=mp[left]){
                  return false;

               }
               brackets.pop();

            }
         }
         return brackets.empty();
         
    }
};
