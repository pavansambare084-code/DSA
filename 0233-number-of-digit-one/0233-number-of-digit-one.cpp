class Solution {
public:
    int countDigitOne(int n) {
        int ans = 0;
        long long pos = 1;
        int r = 0; 
        int l = 0;
        while(pos <= n){
            l = n / (pos*10);
            r = n % pos;
            int cur = (n / pos) % 10;
            if(cur > 1) ans += ((l * pos) + pos);
            else if (cur == 1) ans += (l * pos) + (r + 1);
            else ans += (l * pos);
            pos *= 10;
        }
    
        return ans;
    }
};