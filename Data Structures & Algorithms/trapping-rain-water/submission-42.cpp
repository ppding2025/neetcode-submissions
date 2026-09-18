class Solution {
public:
    int trap(vector<int>& height) {
        int leftmax=0;
        int rightmax=0;
        int l=0;
        int r=height.size()-1;
        int totalwater=0;
        
        while(l<r){

            if (height[l]<=height[r]){
                leftmax=max(leftmax, height[l]);
                totalwater+=leftmax-height[l];
                l++;
            }
            
            else{
                rightmax=max(rightmax,height[r]);
                totalwater+=rightmax-height[r];
                r--;

            }


        }
        return totalwater;
    }
};
