class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;
        for(long long i=2;i<=x;i++){
            long long pro=i*i,prev=(i-1)*(i-1);
            if(pro==x){
                return i;
            }
            else if(pro>x && prev<x){
                return i-1;
            }
        }
        return 0;
    }
};