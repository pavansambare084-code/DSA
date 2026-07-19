class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> arr;
        int n=nums.size();
        int end=(1<<n);
        for(int i=0;i<end;i++){
            vector<int> ar2;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    ar2.push_back(nums[j]);
                }
            }
            arr.push_back(ar2);
        }
        return arr;
    }
};