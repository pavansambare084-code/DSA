class Solution {
public:
    string removeOuterParentheses(string s) {
        string str = "";
        int bal = 0;
        stack<char> st;
        for(char c : s){
            if(c == '('){
                if(bal != 0) str+=c;
                bal++;
            }
            else{
                bal--;
                if(bal != 0) str+=c;
            }
        }
        return str;
    }
};