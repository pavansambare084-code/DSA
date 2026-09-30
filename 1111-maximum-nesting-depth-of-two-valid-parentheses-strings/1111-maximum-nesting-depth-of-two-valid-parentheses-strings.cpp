class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector <int> ans;
        int dp = 0;
        for(char c : seq){
            if(c == '('){
                dp++;
                ans.push_back(dp % 2);
            }
            else{
                ans.push_back(dp % 2);
                dp--;
            }
        }
        return ans;
    }
};