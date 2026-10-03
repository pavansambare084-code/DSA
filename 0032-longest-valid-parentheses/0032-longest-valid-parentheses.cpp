class Solution {
public:
    bool isValid(string s){
        stack<char>st;
        for(char c : s){
            if(c == '(') st.push(c);
            else if(st.empty()) return 0;
            else st.pop();
        }
        if(st.empty()) return 1;
        return 0;
    }
    void solve(int ind ,int & n , string s , string temp){
        if(ind == s.length()){
            if(isValid(temp)){
                if(temp.length() > n) n = temp.length();
            }
            return;
        }
        temp+=s[ind];
        solve(ind+1 , n , s , temp);
        temp.pop_back();
        solve(ind+1 , n , s , temp);
        return;
    }
    int longestValidParentheses(string s) {
        int n = 0 ;
        solve(0 , n , s , "");
        return n;
    }
};