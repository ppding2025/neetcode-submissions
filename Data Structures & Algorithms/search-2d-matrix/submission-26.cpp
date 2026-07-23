class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top=0;
        int bottom=matrix.size()-1;
        int mid;
        int n=matrix[0].size();
        while (top<=bottom){
             
             mid=top+(bottom-top)/2;

             if (matrix[mid][0]==target||matrix[mid][n-1]==target){

                return true;
             }
             else if (target<matrix[mid][0]){
                bottom=mid-1;

             }
             else if (target>matrix[mid][n-1]){

                top=mid+1;

             }
             else{
                 break;

             }



        }

        int low=0;
        int high=n-1;

        while(low<=high){

            int m=low+(high-low)/2;

            

                if (matrix[mid][m]==target){

                      return true;

                }
                else if (target>matrix[mid][m]){

                    low=m+1;
                }
                else{


                    high=m-1;
                }


        }

        return false;   


        




    }
};
