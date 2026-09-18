class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxwater=0;
        
        int l=0,r=heights.size()-1;

        while (l<r){
             int current=0;
             if (heights[l]>=heights[r]){
                current=heights[r]*(r-l);
                r--;
             }
             else{
                current=heights[l]*(r-l);
                l++;
             }
             maxwater=max(maxwater,current);


        }
        

    return maxwater;



        

    }
};
