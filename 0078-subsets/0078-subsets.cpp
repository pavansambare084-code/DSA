// class Solution {
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> arr;
//         int n=nums.size();
//         int end=(1<<n);
//         for(int i=0;i<end;i++){
//             vector<int> ar2;
//             for(int j=0;j<n;j++){
//                 if(i&(1<<j)){
//                     ar2.push_back(nums[j]);
//                 }
//             }
//             arr.push_back(ar2);
//         }
//         return arr;
//     }
// };
class Solution {
public:
    void Sub(int i,vector<int>&ds,vector<int>&nums,vector<vector<int>>&ans){
        if(i==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        Sub(i+1,ds,nums,ans);
        ds.pop_back();
        Sub(i+1,ds,nums,ans);     
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        Sub(0,ds,nums,ans);
        return ans;
    }
};