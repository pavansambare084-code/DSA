class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return 0;
        int ar1[26]={0},ar2[26]={0},n=s.length();
        for(int i=0;i<n;i++){
            ar1[s[i]-'a']++;
            ar2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(ar1[i]!=ar2[i]) return 0;
        }
        return 1;
    }
};