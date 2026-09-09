class Solution {
public:
    void f(int i, vector<vector<int>> &ans, vector<int>&nums){
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
        unordered_set<int> used;
        for(int j=i;j<nums.size();j++){
            if(used.count(nums[j])) continue;
            used.insert(nums[j]);
            swap(nums[i],nums[j]);
            f(i+1,ans,nums);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        f(0,ans,nums);
        return ans;
    }
};