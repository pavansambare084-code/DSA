class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int r_sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            r_sum += nums[i];
        }
        int l_sum = 0 , i = 0;
        while(i < nums.size()){
            if(l_sum == r_sum-nums[i]) return i;
            l_sum += nums[i];
            r_sum -= nums[i];
            i++;
        }
        return -1;
    }
};