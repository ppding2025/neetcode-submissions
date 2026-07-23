class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       //the maximum banana eating rate will be the greatest element in the array as exceeding that the hours needed won't decrease
       //the minimum will be 1;
       long maxRate= *max_element(piles.begin(),piles.end());
       int minRate=1;
       int res;
       while (minRate<=maxRate){

         long mid=minRate+(maxRate-minRate)/2;
         
       

         if (calhours(piles,mid)>h){
            minRate=mid+1;


         }
         else{
            res=mid;
            maxRate=mid-1;
         }

       }

       return res;

    }











       int calhours(vector<int>& piles, int rate){

            int hours=0;

            for (int p:piles){

                 if (p%rate==0){
                    hours+=p/rate;


                 }


                 else{

                    hours=hours+p/rate+1;
                 }

            }

          return hours;

       }

    
};
