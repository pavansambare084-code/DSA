class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long mx=LLONG_MIN,sec_mx=LLONG_MIN,th_mx=LLONG_MIN;
        for(int x:nums){
            if(x==mx || x==sec_mx||x==th_mx) continue;
            else if(x>mx){
                th_mx=sec_mx;
                sec_mx=mx;
                mx=x;
            }
            else if(x>sec_mx){
                th_mx=sec_mx;
                sec_mx=x;
            }
            else if(x>th_mx){
                th_mx=x;
            }
        }
        return th_mx == LLONG_MIN? mx : th_mx;
    }
};