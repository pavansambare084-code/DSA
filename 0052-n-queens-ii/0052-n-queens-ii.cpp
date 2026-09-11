class Solution {
public:
    bool isSafe(int row , int col , int n , vector<string> &board){
        int row1 = row;
        int col1 = col;
        while(row >= 0 && col >= 0){
            if(board[row][col] == 'Q') return 0;
                row--;
                col--;
        }
        row = row1;
        col = col1;
        while(col >=0){
            if(board[row][col]=='Q') return 0;
            col--;
        }
        row = row1;
        col = col1;
        while(row <n && col >=0){
            if(board[row][col] == 'Q') return 0;
            row++;
            col--;
        }
        return 1;
    }
    void solve(int col, int &ans , int n, vector<string>&board){
        if(col == n){
            ans++;
            return;
        }
        for(int row = 0 ; row < n; row++){
            if(isSafe(row , col , n , board)){
                board[row][col] = 'Q';
                solve(col+1 , ans , n , board);
                board[row][col] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<string> board(n);
        int ans = 0;
        string s(n, '.');
        for(int i = 0; i < n; i++){
            board[i] = s;
        }
        solve(0 , ans , n , board);
        return ans;
    }
};