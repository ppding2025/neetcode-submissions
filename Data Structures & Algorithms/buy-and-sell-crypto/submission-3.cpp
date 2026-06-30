class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int totalProfit=0;
        int todayProfit;
        int lbp=INT_MAX;


    for (int i=0; i< prices.size(); ++i){

        if (prices[i]<lbp){

        lbp= prices[i];
        }
        todayProfit=prices[i]-lbp;

        if (totalProfit<todayProfit){


            totalProfit=todayProfit;
        }



    }
    return totalProfit;

    }
};
