class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int current=0;
        int lowest=INT_MAX;
        for (int i=0; i<prices.size(); ++i){

           
              lowest=min(lowest,prices[i]);

              current=prices[i]-lowest;
              profit=max(profit,current);
              



        }

        return profit;

    }
};
