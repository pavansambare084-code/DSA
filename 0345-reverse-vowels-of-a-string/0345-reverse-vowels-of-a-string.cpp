class Solution {
public:
    string reverseVowels(string s) {
        int left=0,right=s.length()-1;
        while(left<=right){
            if((string("aeiouAEIOU").find(s[left])!= string::npos)){
                if(string("aeiouAEIOU").find(s[right])!= string::npos){
                    char temp=s[left];
                    s[left]=s[right];
                    s[right]=temp;
                    right--;
                    left++;
                }
            }
            else{
                left++;
            }
            if((left<right)&& string("aeiouAEIOU").find(s[right])== string::npos){
                right--;
            }
        }
        return s;
    }
};