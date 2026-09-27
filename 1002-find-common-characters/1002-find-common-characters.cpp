class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char, int> mpp;

        // Frequency of characters in first word
        for (char c : words[0]) {
            mpp[c]++;
        }

        // Find minimum frequency across all words
        for (int i = 1; i < words.size(); i++) {
            unordered_map<char, int> curr;

            for (char c : words[i]) {
                curr[c]++;
            }

            for (auto it = mpp.begin(); it != mpp.end(); ) {
                if (curr.count(it->first)) {
                    it->second = min(it->second, curr[it->first]);
                    ++it;
                } else {
                    it = mpp.erase(it);
                }
            }
        }

        vector<string> ans;

        for (auto it : mpp) {
            while (it.second > 0) {
                ans.push_back(string(1, it.first));
                it.second--;
            }
        }

        return ans;
    }
};