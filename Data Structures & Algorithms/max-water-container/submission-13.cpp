class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxwater=0;
        int currentwater=0;
        int l=0;

        int r=heights.size()-1;

            
        while (l<r){

             currentwater=min(heights[l], heights[r])*(r-l);               
             
             maxwater=max(maxwater,currentwater);

             if (heights[l]<heights[r]){

                 l++;

             }

             else{

                 r--;
             }

        }
        return maxwater;

    }
};
