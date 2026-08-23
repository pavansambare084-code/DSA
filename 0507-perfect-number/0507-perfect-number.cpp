class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num==1) return 0;
        int sum=0;
        for(int i=1;i<=(num/2);i++){
            if(num%i==0) sum+=i;
        }
        if(sum==1) return 0;
        if(num%sum==0) return 1;
        return 0;
    }
};