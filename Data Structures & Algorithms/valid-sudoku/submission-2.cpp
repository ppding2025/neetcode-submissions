class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_set<int>> row;
        unordered_map<int,unordered_set<int>> col;
        unordered_map<int,unordered_set<int>> box;    // boxindex=(r/3)*3 +c/3
        int c;
        int r;
       for (r=0; r<9; ++r){
           for (c=0; c<9; ++c){
              
              if (board[r][c]=='.') continue;

              int num= board[r][c]-'0';

              int boxIndex= (r/3)*3+c/3; 

              if (row[r].count(num)|| col[c].count(num)||box[boxIndex].count(num)){

                return false;
              }
              
              row[r].insert(num);
              col[c].insert(num);
              box[boxIndex].insert(num);

           }



       }

    return true;
        
    }
};
