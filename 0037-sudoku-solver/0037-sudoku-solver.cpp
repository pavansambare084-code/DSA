class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    bool solve(vector<vector<char>>& board){
        for(int i = 0 ; i < board.size() ; i++){
            for(int j = 0 ; j < board[i].size() ; j++){
                if(board[i][j] == '.'){
                    for(char c = '1' ; c <= '9' ; c++){
                        if(isValid(c , i , j , board)){
                            board[i][j] = c;
                            if(solve(board) == true) return 1;
                            board[i][j] = '.';
                        }
                        
                    }
                    return 0;
                }
            }
        }
        return 1;
    }
    bool isValid(char c , int row , int col , vector<vector<char>>& board){
        for(int i = 0 ; i < board.size(); i++){
            if(board[row][i] == c) return 0;
            if(board[i][col] == c) return 0;
            if(board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c ) return 0;
        }
        return 1;
    }
};