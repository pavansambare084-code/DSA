class Solution {
public:
    string largestEven(string s) {
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='2'){
                string s1;
                for(int j=0;j<=i;j++){
                    s1+=s[j];
                }
                return s1;
            }
        }
        return "";
    }
};