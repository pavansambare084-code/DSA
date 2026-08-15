class Solution {
public:
    int mx=0;
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int mx=nums[0];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>mx) mx=sum;
            if(sum<0) sum=0;
        }
        return mx;
        }
};