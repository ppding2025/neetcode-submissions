class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> pool;
        int maxl=0;
        for (int n:nums){
            pool.insert(n);
        }
        for (int v: pool){
                 int length=1;
                 if (pool.count(v-1)) continue;
                 while(pool.count(v+length)){
                        
                           length++;
                        
                 }
                 
                maxl=max(maxl,length); 
        }
        return maxl;
    }
};
