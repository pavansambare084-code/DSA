class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> v;
        for(int i = 0 ; i < matrix.size() ; i++){
            int mn = *min_element(matrix[i].begin(),matrix[i].end());
            int mx = 0;
            int col = 0;
            for(int j = 0; j < matrix[i].size(); j++) {
                if(matrix[i][j] == mn) {
                    col = j;
                    break;
                 }
            }
            for(int j =  0 ; j < matrix.size() ; j++){
                 mx = max(mx, matrix[j][col]);
            }
            if(mx == mn) v.push_back(mn);
            }
        return v;
    }
};