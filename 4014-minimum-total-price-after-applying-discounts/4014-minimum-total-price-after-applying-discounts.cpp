class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        double add=0;
        sort(prices.begin(),prices.end());
        sort(discounts.begin(),discounts.end());
        int n=discounts.size()-1;
        int k=prices.size()-1;
        while(n>=0&&k>=0){
            add+=prices[k]*(100-discounts[n])/100.0;
            n--;
            k--;
        }
        while(k>=0){
            add+=prices[k];
            k--;
        }
        return add;
    }
};