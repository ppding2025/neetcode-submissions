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
                l++;
                leftmax=max(leftmax, height[l]);
                totalwater+=leftmax-height[l];
                
            }
            
            else{
                
                
                
                r--;
                rightmax=max(rightmax,height[r]);
                totalwater+=rightmax-height[r];
            }


        }
        return totalwater;
    }
};
