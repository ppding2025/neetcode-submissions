class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_map<int,unordered_set<char>>rowmap;
        unordered_map<int,unordered_set<char>>colmap;
        unordered_map<int,unordered_set<char>>boxmap;



        for (int r=0; r<board.size(); ++r){
            for (int c=0; c<board[0].size(); ++c){
                 if (board[r][c]=='.'){

                     continue;
                 }
                 
                 int boxindex=c/3+r/3*3;

                 if (rowmap[r].count(board[r][c])||colmap[c].count(board[r][c])||boxmap[boxindex].count(board[r][c])){

                       return false;

                 }
                 rowmap[r].insert(board[r][c]);
                 colmap[c].insert(board[r][c]);
                 boxmap[boxindex].insert(board[r][c]);
            }





        }

        return true;

        
    }
};
