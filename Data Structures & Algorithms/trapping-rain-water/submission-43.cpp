class Solution {
public:
    int trap(vector<int>& height) {
        
        int l=0;
        int r=height.size()-1;
        int totalwater=0;
        int leftmax=height[0];
        int rightmax=height[r];
        
        
        while(l<r){

            if (leftmax<=rightmax){
                
                totalwater+=leftmax-height[l];
                l++;
                leftmax=max(leftmax, height[l]);
            }
            
            else{
                totalwater+=rightmax-height[r];
                
                
                r--;
                rightmax=max(rightmax,height[r]);
            }


        }
        return totalwater;
    }
};
