class Solution {
public:
    string convertToBase7(int num) {
        int n=abs(num);
        if(num==0) return "0";
        string s;
        while(n>0){
            s+=to_string(n%7);
            n/=7;
        }
    if(num<0) s+="-";
    int l=0,r=s.length()-1;
    while(l<r){
        swap(s[l],s[r]);
        l++,r--;
    }
    return s;
    }
};