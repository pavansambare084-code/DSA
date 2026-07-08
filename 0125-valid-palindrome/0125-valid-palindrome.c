bool isPalindrome(char* s) {
    int n = strlen(s);
    char str[n];
    int len=-1;
    for(int i=0;i<n;i++){
        if(isalnum(s[i])){
            str[++len]=tolower(s[i]);
        }
    }
    int i=0;
    while(i<len){
        if(str[i]==str[len]){
        }
        else{
            return 0;
        }
        i++;
        len--;
    }
    return 1;
}
