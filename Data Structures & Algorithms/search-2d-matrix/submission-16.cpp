class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

       
       int low=0;
       int high=matrix.size()-1;
       int n=matrix[0].size()-1;
       int l=0;
       int r=n;
       int mid;
       while(low<=high){
            mid= (low+high)/2;
            if (matrix[mid][0]==target||matrix[mid][n]==target){

                return true;
            }
            if (matrix[mid][0]<target){
                if (target<matrix[mid][n]){
                break;
                }
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            

       }

       while(l<=r){

        int m=(l+r)/2;
        
        if (matrix[mid][m]==target){

            return true;
        }
        if (target < matrix[mid][m]){

           r=m-1;

        }
        else{
           
           l=m+1;


        }



       }


       return false;

       

    }
};
