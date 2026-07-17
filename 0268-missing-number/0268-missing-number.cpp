class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size(),x=0;
        for(int i=1;i<=n;i++){
            x^=i;
            x^=nums[i-1];
        }
        return x;
        // int n =nums.size(),x=0,sum=n*(n+1)/2;
        // for(int i=0;i<n;i++){
        //     x+=nums[i];
        // }
        // return sum-x;
    }
};