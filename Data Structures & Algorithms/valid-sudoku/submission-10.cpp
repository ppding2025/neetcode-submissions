class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,set<char>> row;
        unordered_map<int,set<char>> col;
        unordered_map<int,set<char>> box;

        for (int r=0; r<board.size();++r){

            for (int c=0; c<board[0].size();++c){

                if (board[r][c]=='.'){

                   continue;

                }
                int boxindex= r/3*3+c/3;

                if (row[r].count(board[r][c])||col[c].count(board[r][c])||box[boxindex].count(board[r][c])){


                  return false;
                }
                
                row[r].insert(board[r][c]);
                col[c].insert(board[r][c]);
                box[boxindex].insert(board[r][c]);


            }


        }
      return true;
    }
};
