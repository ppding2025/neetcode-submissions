class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> ct;
        int res=stoi(tokens[0]);
        for (int i=0; i<tokens.size(); ++i){

             if (tokens[i]!="+" && tokens[i]!="-"&&tokens[i]!="*"&&tokens[i]!="/"){

                 ct.push(stoi(tokens[i]));

             }
             else{
                
                 int n1=ct.top();
                 ct.pop();
                 int n2=ct.top();
                 ct.pop();
                 
                 if (tokens[i]=="+"){

                    res=n1+n2;
                 }
                 if (tokens[i]=="-"){

                    res=n2-n1;


                 }
                 if (tokens[i]=="*"){

                    res=n2*n1;
                 }
                 if (tokens[i]=="/"){

                    res=n2/n1;
                 }
                 ct.push(res);
             }

        }

        return res;

    }
};
