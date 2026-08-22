class Solution {
public:
    bool checkDivisibility(int n) {
        int pro=1;
        int sum=0;
        int m=n;
        while(m>0){
            pro*=m%10;
            sum+=m%10;
            m/=10;
        }
        if(n%(pro+sum)==0) return 1;
        return 0;
    }
};