class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,set<int>> row;
        unordered_map<int,set<int>> col;
        unordered_map<int,set<int>> box;
        
        for (int r=0; r<board.size(); r++){

           for(int c=0; c<board[r].size(); c++){

                  if (board[r][c]=='.'){

                    continue;
                  }
                  
                  int number= board[r][c]-'0';
                  int boxindex=r/3*3+c/3;
                if (row[r].count(number)||col[c].count(number)||box[boxindex].count(number)) {


                    return false;
                }

                row[r].insert(number);
                col[c].insert(number);
                box[boxindex].insert(number);

           }



        }

        return true;


    }
};
