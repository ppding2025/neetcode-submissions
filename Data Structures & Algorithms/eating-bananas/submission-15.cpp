class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
         int lowR=1;
         int highR= *max_element(piles.begin(), piles.end());  //get value of the iterator
         int midR;
         while (lowR<=highR){
            midR=(lowR+highR)/2;
            long long totalh=totalHour(midR,piles);
            
            if (totalh>h){

                 lowR=midR+1;
            }
            else {

                 highR=midR-1;

            }
 

         }
        return lowR;
    }


    long long totalHour(int rate, vector<int>& piles){
            long long total=0;
            for (int i=0; i<piles.size(); ++i){
                total=total+piles[i]/rate;
                if (piles[i]%rate!=0){

                    total++;
                }

            }

        return total;

    }
};
