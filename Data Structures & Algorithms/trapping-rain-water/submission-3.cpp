class Solution {
public:
    int trap(vector<int>& height) {
      
      

      int result=0;
      for (int i=0; i<height.size(); ++i){
          int l=0;
          int r=height.size()-1;
          int lMax=0;
          int rMax=0;
          while (l<i){
          
          lMax=max(lMax,height[l]);

          l++;
          }

          while (r>i){
          
          rMax=max(rMax,height[r]);

          r--;
          }

          int temp= min(lMax,rMax)-height[i];
          temp=max(temp,0);
          result=result+temp;
      }  

      return result;
    }
};
