class Solution {
public:
    void solve(int i,int k, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans){
        if(ds.size()==k){
            ans.push_back(ds);
            return;
        }
        if(i==nums.size()) return;
         ds.push_back(nums[i]);
        solve(i+1,k,nums,ds,ans);
        ds.pop_back();
        solve(i+1,k,nums,ds,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums,ds;
        vector<vector<int>> ans;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
       
        solve(0,k,nums,ds,ans);
        return ans;
    }
};