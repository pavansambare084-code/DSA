class Solution {
public:
    vector<int> evenOddBit(int n) {
        int cnt=0,e_cnt=0,o_cnt=0;
        while(n>0){
            int rem=n%2;
            if(rem==1 && cnt%2==0){
                e_cnt++;
            }
            else if(rem==1 && cnt%2!=0){
                o_cnt++;
            }
            cnt++;
            n/=2;
        }
        return{e_cnt,o_cnt};
    }
};