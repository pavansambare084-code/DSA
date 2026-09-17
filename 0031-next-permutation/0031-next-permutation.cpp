class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 2;
        while( i >= 0 && nums[i] >= nums[i+1]){
            i--;
        }
        if(i>=0){
        int j = nums.size() - 1;
        while(j >= 0 && nums[j] <= nums[i]){
            j--;
            }
        swap(nums[i], nums[j]);
        }
    int k = nums.size()-1;
    i++;
    while(i < k){
        int temp = nums[i];
        nums[i] = nums[k];
        nums[k]  = temp;
        k--;
        i++;
    }
    }
};