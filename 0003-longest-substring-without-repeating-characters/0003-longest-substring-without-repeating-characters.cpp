class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mx = 0;
        string s1;

        for (int i = 0; i < s.length(); i++) {

            while (s1.find(s[i]) != string::npos) {
                s1.erase(s1.begin());
            }

            s1 += s[i];
            mx = max(mx, (int)s1.length());
        }

        return mx;
    }
};