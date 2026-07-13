class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int totalhours=0;
        
        int low=1;
        int high=*max_element(piles.begin(), piles.end());
        int mid;
        
        
        while (low<=high){

               mid=(low+high)/2;
               totalhours=totalHours(piles, mid);
               if (totalhours>h){
                  
                low=mid+1;

               }
               else{
                high=mid-1;


               }
               


        }

        return low;



    }

    int totalHours(vector<int>& piles, int k){
          int total=0;
    for (int i=0; i<piles.size(); ++i){
             
             if (piles[i]%k==0){

                total+= piles[i]/k;
             }

             else{
                 total+= piles[i]/k+1;

             }


        }

        return total;
    }
};
