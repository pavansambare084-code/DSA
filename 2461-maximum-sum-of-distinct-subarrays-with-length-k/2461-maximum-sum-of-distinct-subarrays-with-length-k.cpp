class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long cur_sum = 0;
        unordered_map<int,int>mpp;
        for(int i = 0 ; i < k ; i++){
            cur_sum += nums[i];
            mpp[nums[i]]++;
        }
        long long max_sum = 0;
        if(mpp.size() == k ) max_sum = cur_sum;
        for(int i = 0 ; i < nums.size() - k ; i++){
            cur_sum -= nums[i];
            mpp[nums[i]]--;
            if(mpp[nums[i]] == 0) mpp.erase(nums[i]);
            cur_sum += nums[i+k];
            mpp[nums[i+k]]++;
            if(mpp.size() == k)
            max_sum = max(cur_sum , max_sum);
        }
        return max_sum;
    }
};
