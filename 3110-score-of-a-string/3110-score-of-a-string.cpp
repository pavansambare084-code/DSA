class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
        int i=0,j=1;
        while(j<s.length()){
            int  k=s[j]-s[i];
            k=abs(k);
            ans+=k;
            i++;
            j++;
        }
        return ans;
    }
};