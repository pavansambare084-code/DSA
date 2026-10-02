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
    void gen(int k , vector<string> &ans , string &temp){
        if(temp.length()>=k*2){
            if(isValid(temp)){
                ans.push_back(temp);
            }
            return;
        }
        temp+="(";
        gen(k,ans,temp);
        temp.pop_back();
        temp+=")";
        gen(k,ans,temp);
        temp.pop_back();
        return;
    }
    vector<string> generateParenthesis(int n) {
        string temp = "";
        vector<string> ans;
        gen(n,ans,temp);
        return ans;
    }
};