class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater=0;
        int l=0;
        int r=heights.size()-1;
        while (l<r){

             int tempWater=min(heights[l],heights[r])*(r-l);
             if (heights[l]<heights[r]){
                l++;
             }
             else{

                r--;
             }
             
             maxWater=max(maxWater,tempWater);

        }

    return maxWater;
    }
};
