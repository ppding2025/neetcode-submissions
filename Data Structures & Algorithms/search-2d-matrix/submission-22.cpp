class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int length=matrix[0].size();
        int high=matrix.size()-1;
        int low=0;
        int l=0;
        int r=length-1;
        int middle=-1;
        
        while(low<=high){

            int mid=(high+low)/2;
            if (matrix[mid][0]==target||matrix[mid][length-1]==target){

               return true;


            }
            else if(matrix[mid][0]>target){
                 high=mid-1;

            }
            else if (matrix[mid][length-1]<target){

                low=mid+1;
            }
            else{

                middle=mid;
                break;
            }
        }
        if (middle==-1){

            return false;
        }
        while (l<=r){

             int m=(l+r)/2;

             if (matrix[middle][m]==target){

                return true;
             }
             else if (matrix[middle][m]>target){

                   r=m-1;


             }

             else{

                  l=m+1;

             }
        }
        return false;

    }
};
