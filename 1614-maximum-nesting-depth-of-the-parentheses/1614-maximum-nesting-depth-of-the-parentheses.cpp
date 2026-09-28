class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int mx =  0;
        for(char c: s ){
            if(c == '(' || c == '[' || c == '{') st.push(c);
            else if(c == ')' || c == ']' || c == '}') st.pop();
            if(st.size() > mx) mx = st.size();
        }
        return mx;
    }
};