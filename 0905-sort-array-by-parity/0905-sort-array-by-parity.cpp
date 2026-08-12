class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int even=0,n=nums.size(),odd=n-1;
        while(even<odd){
            while(nums[even]%2==0&&even<n-1){
                even++;
            }
            while(nums[odd]%2!=0&& odd>=1){
                odd--;
            }
            if(even<odd) swap(nums[even],nums[odd]);
        }
        return nums;
    }
};