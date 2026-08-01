class Solution {
public:
    string removeStars(string s) {
        int i=0,next=0,n=s.length();
        while(next<n){
            if(s[next]!='*'){
                s[i]=s[next];
                i++;
            }
            else{
                i--;
            }
            next++;
        }
        return s.substr(0,i);
    }
};