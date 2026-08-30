class Solution {
public:
    char repeatedCharacter(string s) {
        bool ar[26]={false};
        for(char c:s){
            if(ar[c-'a']==true){
                return c;
            }
            else ar[c-'a']=true;
        }
        return ' ';
    }
};