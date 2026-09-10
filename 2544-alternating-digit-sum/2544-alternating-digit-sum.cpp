class Solution {
public:
    int alternateDigitSum(int n) {
        int cnt=0;
        int sum=0;
        int rev=0;
        while(n>0){
            rev = rev * 10 + n % 10;
            n/=10;
        }
        n=rev;
        while(n>0){
            if(cnt % 2 == 0){
                sum+=n%10;
            }
            else{
                sum-=n%10;
            }
            n/=10;
            cnt++;
        }
        return sum;
    }
};