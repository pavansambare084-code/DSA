class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string m;
        int n=word1.length(),size=word2.length();
        while(i<n && j<size){
                m.push_back(word1[i]);
                i++;
                m.push_back(word2[j]);
                j++;
        }
        while(i<n){
            m.push_back(word1[i]);
            i++;
        }
        while(j<size){
             m.push_back(word2[j]);
            j++;
        }
        return m;
    }
};