class Solution {
public:
int com(int n, int r){
    int res=1;
    for(int i=0;i<r;i++){
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int>temp;
        for(int i=1;i<=numRows;i++){
            vector<int>temp;
            for(int j=1;j<=i;j++){
                int k=com(i-1,j-1);
                temp.push_back(k);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};