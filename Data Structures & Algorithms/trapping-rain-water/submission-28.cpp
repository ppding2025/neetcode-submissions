class Solution {
public:
    int trap(vector<int>& height) {
        
        
        int l=0;

        int r=height.size()-1;

        int leftmax=height[l];
        int rightmax=height[r];
        int maxwater=0;

        while(l<r){
               
                

              if (leftmax<=rightmax){
                 maxwater+=leftmax-height[l];
                
                 
                 l++;
                 leftmax=max(leftmax,height[l]);
              }
               else{
                   
                   maxwater+=rightmax-height[r];
                   r--;
                   rightmax=max(rightmax,height[r]);
                  

               }



        }

return maxwater;




    }
};
