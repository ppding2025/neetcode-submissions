class Solution {
public:
    int trap(vector<int>& height) {
        
        int leftmax=0;
        int rightmax=0;
        int n=height.size();

        vector<int> left(n,0);
        vector<int> right(n,0);
        int maxwater=0;
        for (int i=1; i<n; ++i){
           
           leftmax=max(leftmax,height[i-1]);

           left[i-1]=leftmax;


        }
        for (int i=n-2; i>=0; --i){

            rightmax=max(rightmax,height[i+1]);
            right[i+1]=rightmax;

        }
        for (int i=0; i<n; ++i){

            int current=max(min(left[i],right[i])-height[i],0);

            maxwater+=current;


        }
        return maxwater;
    }
};
