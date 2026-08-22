class Solution {
public:
    void f(int i, int target, vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans){
        if(i>=nums.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
       if(target>=nums[i]){
           ds.push_back(nums[i]);
           f(i,target-nums[i],ds,nums,ans);
           ds.pop_back();
       }
       f(i+1,target,ds,nums,ans);
       return;


    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>ds;
        f(0,target,ds,candidates,ans);
        return ans;
    }
};