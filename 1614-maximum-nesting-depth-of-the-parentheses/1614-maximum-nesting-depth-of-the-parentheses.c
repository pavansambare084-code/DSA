int maxDepth(char* s) {
    int n=strlen(s);
    char st[n];
    int top=-1,high=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            if(top!=(n-1)){
                top++;
                if(top + 1 > high)
                    high = top + 1;
                st[top]=s[i];
            }
        }
        else if(top != -1 &&((st[top]=='(' && s[i]==')') ||
                (st[top]=='{' && s[i]=='}') ||(st[top]=='[' && s[i]==']')))
        {
            top--;
        }
    }
    return high;
}