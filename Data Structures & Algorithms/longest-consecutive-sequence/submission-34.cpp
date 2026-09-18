class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> pool;
        
        int maxlength=0;
        for (int n:nums){

             pool.insert(n);


        }

        for (int n: pool){
             
             if (pool.count(n-1)){
                 continue;
             }
             int length=1;
             
             while (pool.count(n+length)){

                length++;
             }
             maxlength=max(maxlength, length);
        }

        return maxlength;

    }
};
