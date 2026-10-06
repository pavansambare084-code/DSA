class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int ans = 0 ;
        if(s == "") return 0;
        for(char c : s){
            if(c == '(') st.push(c);
            else if(st.empty()) st.push(c);
            else if (st.top() == '(')st.pop();
            else st.push(c);
        }
        while(st.empty() == 0){
            st.pop();
            ans++;
        }
        return ans ;
    }
};