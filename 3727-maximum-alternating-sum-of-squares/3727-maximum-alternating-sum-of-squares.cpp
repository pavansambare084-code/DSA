class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans = 0 ;
        sort(nums.begin(), nums.end(), [](int a, int b) {
        return std::abs(a) < std::abs(b);
        });
        int mid = nums.size() / 2;
        int i = 0;
        while(i < mid){
            ans-= 1LL * nums[i] * nums[i];
            i++;
        }
        while(i < nums.size()){
            ans += 1LL * nums[i] * nums[i];
            i++;
        }
        return ans;
    }
};