class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char,char> mp={{')','('},{']','['},{'}','{'}};
        
        for (char c:s) {
          if (mp.count(c)){
          
          if  (stk.size()!=0 && mp[c]== stk.top()){
             stk.pop();

          }
          else{
             
             return false;

          }
          }
          else{
             stk.push(c);

          }
        }

        
        return stk.empty();

    }
};
