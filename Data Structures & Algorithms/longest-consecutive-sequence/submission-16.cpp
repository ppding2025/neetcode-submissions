class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> st;
        
        int maxl=0;
        for (int num:nums){

           st.insert(num);

        }
        
        for (int n : st){

               if (!st.count(n-1)){

                 int current=1;
                     while(st.count(n+current)){

 
                        current++;


                     }

                maxl=max(maxl,current);
               }

            


        }
        return maxl;
    }
};
