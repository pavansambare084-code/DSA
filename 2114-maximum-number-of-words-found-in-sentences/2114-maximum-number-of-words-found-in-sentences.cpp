class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int mx=0;
        for(string s:sentences){
            int words=1;
            for(char c:s){
                if(c==' '){
                    words++;
                }
            }
            if(words>mx) mx=words;
        }
        return mx;
    }
};