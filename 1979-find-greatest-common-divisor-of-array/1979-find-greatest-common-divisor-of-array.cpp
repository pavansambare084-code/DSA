class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int mn=*min_element(nums.begin(),nums.end());
        int div=1;
        for(int i=2;i<=mn;i++){
            if(mn % i == 0 && mx % i == 0){
                div = i;
            }
        }
        return div;
    }
};