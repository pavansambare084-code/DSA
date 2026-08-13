class Solution {
public:
    string largestOddNumber(string num) {
        string ans;
        int n = num.length();
        for(int i=n-1;i>=0;i--){
            int k= num[i] - '0';
            if(k%2!=0){
                for(int j=0;j<=i;j++){
                    ans+=num[j];
                }
                break;
            }
        }
        return ans;
    }
};