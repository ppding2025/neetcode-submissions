class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int k=1;
        long long tHours=0;
        
        for (int i=0; i< piles.size(); ++i){
               tHours=tHours+piles[i]/k;
               if (piles[i]%k!=0){
                  tHours++;
               }
             
        }

        while (tHours>h){
        tHours=0;
        k++;
        for (int i=0; i< piles.size(); ++i){
               tHours=tHours+piles[i]/k;
               if (piles[i]%k!=0){
                  tHours++;
               }
             
        }

        }

        return k;

    }
};
