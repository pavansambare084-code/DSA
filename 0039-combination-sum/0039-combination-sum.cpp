class Solution {
public:
    void solve(int sum,int target,vector<int> &ds,vector<int> &candidates,vector<vector<int>>&v,int i,int n){
        if(sum>target) return;
        if(i>=n){
            if(sum==target){
                v.push_back(ds);
            }
            return;
        }
        ds.push_back(candidates[i]);
        sum+=candidates[i];
        solve(sum,target,ds,candidates,v,i,n);
        ds.pop_back();
        sum-=candidates[i];
        solve(sum,target,ds,candidates,v,i+1,n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int> ds;
        int n=candidates.size();
        solve(0,target,ds,candidates,v,0,n);
        return v;
    }
};