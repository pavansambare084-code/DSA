class Solution {
public:
    void merge(int low, int mid, int high, vector<int> &nums){
        vector<int> ans;
        int left=low,right=mid;
        while(left<mid && right<=high){
            if(nums[left]<nums[right]){
                ans.push_back(nums[left]);
                left++;
            }
            else{
                ans.push_back(nums[right]);
                right++;
            }
        }
        while(left<mid){
            ans.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            ans.push_back(nums[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            nums[i]=ans[i-low];
        }
    }
    void divide(int low , int high, vector<int> &nums){
        if(low>=high) return;
        int mid=low+(high-low)/2;
        divide(low,mid,nums);
        divide(mid+1,high,nums);
        merge(low,mid+1,high,nums);
    }
    vector<int> sortArray(vector<int>& nums) {
        divide(0,nums.size()-1,nums);
        return nums;
    }
};