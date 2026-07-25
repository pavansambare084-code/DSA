class Solution {
public:
    int maxProduct(int n) {
        if(n<=9) return n;
        int max=0,sec=0;
        while(n>0){
            int dig=n%10;
            if(dig<max && dig>sec){
                sec=dig;
            }
            else if(dig>=max){
                sec=max;
                max=dig;
            }
            n/=10;
        }
        return max*sec;
    }
};