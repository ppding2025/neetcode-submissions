class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxwater=0;

        int l=0;
        int r=heights.size()-1;
       
        while (l<r){
        
        int current=min(heights[r],heights[l])*(r-l);
        maxwater=max(maxwater,current);
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
