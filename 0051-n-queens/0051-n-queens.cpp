class Solution {
public:
    bool isSafe(int row , int col , vector<string> & board, vector<vector<string>> &ans , int n){
        int tmp1= row;
        int tmp2= col;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row--;
            col--;
        }
        row=tmp1;
        col=tmp2;
        while(col>=0){
            if(board[row][col]=='Q'){
                return 0;
            }
            col--;
        }
        col=tmp2;
        while(row<n && col>=0){
            if(board[row][col]=='Q') return 0;
            col--;
            row++;
        }
        return 1;
    }
    void solve(int n , int col , vector<string> & board, vector<vector<string>> &ans){
        if(col == n){
            ans.push_back(board);
            return;
        }
        for(int row = 0; row < n; row++){
            if(isSafe(row,col,board,ans,n)){
                board[row][col]='Q';
                solve(n, col+1, board , ans);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i = 0; i < n; i++){
            board[i]=s;
        }
        solve(n, 0, board, ans);
        return ans;
    }
};