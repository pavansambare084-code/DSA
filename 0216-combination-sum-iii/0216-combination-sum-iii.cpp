class Solution {
public:
    void solve(int i, int k, int target, vector<int> &nums, vector<int> &ds, vector<vector<int>>&ans){
        if(ds.size()==k){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(i==nums.size()) return;
        ds.push_back(nums[i]);
        solve(i+1,k,target-nums[i],nums,ds,ans);
        ds.pop_back();
        solve(i+1,k,target,nums,ds,ans);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int>ds,nums;
        for(int i=1;i<10;i++) nums.push_back(i);
        solve(0,k,n,nums,ds,ans);
        return ans;
    }
};