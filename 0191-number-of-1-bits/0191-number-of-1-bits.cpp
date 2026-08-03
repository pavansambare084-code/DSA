class Solution {
public:
    int hammingWeight(int n) {
        if(n==0) return 0;
        int cnt=0;
        while(n>0){
            if(n%2!=0) cnt++;
            n/=2;
        }
        return cnt;
    }
};