class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mpp;
        for(int i=0;i<s.length();i++){
            if(mpp.count(s[i])==1){
                return s[i];
            }
            else{
                mpp[s[i]]++;
            }
        }
        return ' ';
    }
};