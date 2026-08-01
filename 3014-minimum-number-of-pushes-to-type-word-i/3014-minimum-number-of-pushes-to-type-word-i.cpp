class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        int push=0;
        for(int i=0;i<n;i++){
            int pushesh=(i/8) + 1;
            push+=pushesh;
        }
        return push;
    }
};