class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int ,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto x:mpp){
            if(x.second>=2) return 1;
        }
        return 0;
    }
};