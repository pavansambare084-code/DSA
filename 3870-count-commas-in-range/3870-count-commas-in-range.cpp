class Solution {
public:
    int countCommas(int n) {
        if(n<1000) return 0;
        int cnt=0;
        int i;
        for(i=1000;i<=n;i++){
            cnt++;
        }
        return cnt;
    }
};