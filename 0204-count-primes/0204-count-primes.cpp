class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        vector<bool>ans(n,true);
        for(int i=2;i*i<n;i++){
            if(ans[i]){
                for(int j=i*i;j<n;j+=i){
                    ans[j]=false;
                }
            }
        }
        int cnt=0;
        for(int i=2;i<n;i++){
            if(ans[i]){
                cnt++;
            }
        }
        return cnt;
    }
};