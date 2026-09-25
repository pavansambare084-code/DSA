class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int f_mn = INT_MAX , s_mn = INT_MAX;
        for(int i = 0 ; i < prices.size() ; i++){
            if(prices[i] < f_mn){
                s_mn = f_mn;
                f_mn = prices[i];
            }
            else if( prices[i] < s_mn){
                s_mn = prices[i];
            }
        }
        if(s_mn + f_mn <= money) return money -(s_mn + f_mn);
        return money;
    }
};