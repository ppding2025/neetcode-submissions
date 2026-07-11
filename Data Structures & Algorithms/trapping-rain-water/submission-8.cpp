class Solution {
public:
    int trap(vector<int>& height) {
        
        int l=0;
        int r=height.size()-1;
        int lmax=0;
        int rmax=0;
        int res=0;
        while(l<=r){
            if (lmax<=rmax){
                 lmax=max(lmax,height[l]);
                 
                 res+=lmax-height[l];
                 l++;

            }

            else {
                 rmax=max(rmax,height[r]);

                 res+=rmax-height[r];
                 r--;
            }


        }

        return res;


        

    }
};
