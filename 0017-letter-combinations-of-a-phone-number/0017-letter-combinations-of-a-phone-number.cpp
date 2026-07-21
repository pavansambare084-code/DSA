class Solution {
public:
    vector<string> ans;
    string current;

    void solve(int index, string &digits, vector<string> &mp) {
        if (index == digits.size()) {
            ans.push_back(current);
            return;
        }

        string letters = mp[digits[index] - '0'];

        for (char ch : letters) {
            current.push_back(ch);
            solve(index + 1, digits, mp);
            current.pop_back();      // Backtrack
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> mp = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        solve(0, digits, mp);
        return ans;
    }
};