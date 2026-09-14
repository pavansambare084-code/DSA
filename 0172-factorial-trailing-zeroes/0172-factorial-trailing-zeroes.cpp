class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0 , k = 5;
        while(n / k > 0){
            ans += n / k;
            k *= 5;
        }
        return ans;
    }
};