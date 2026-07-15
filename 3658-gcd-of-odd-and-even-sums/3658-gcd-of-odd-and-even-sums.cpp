class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddSum=0,evenSum=0,gcd=1;
        for(int i=1;i<=2*n;i+=2){
            oddSum+=i;
        }
        for(int i=2;i<=2*n;i+=2){
            evenSum+=i;
        }
        int m=min(evenSum,oddSum);
        for(int i=2;i<=m;i++){
            if(evenSum%i==0 && oddSum%i==0){
                gcd=i;
            }
        }
        return gcd;
    }
};