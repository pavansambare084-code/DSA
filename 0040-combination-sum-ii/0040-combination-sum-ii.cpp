class Solution {
public:
    void solve(int index,int target,vector<int> &ds,vector<int> &candidates,vector<vector<int>>&v){
        if(target==0){
            v.push_back(ds);
            return;
        } 
        for(int i=index;i<candidates.size();i++){
        if(i>index && candidates[i]==candidates[i-1]) continue;
        if(candidates[i]>target) break;
        ds.push_back(candidates[i]);
        solve(i+1,target-candidates[i],ds,candidates,v);
        ds.pop_back();
    }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        solve(0,target,ds,candidates,v);
        return v;
    }
};