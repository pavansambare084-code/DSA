class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int , int> mpp;
        for(int i: nums){
            mpp[i]++;
        }
        for(int i:nums){
            if(mpp[i]==1){
                 if((mpp.find(i-1) == mpp.end())&&(mpp.find(i+1) == mpp.end())){
                    ans.push_back(i);
                 }
            }
        }
        return ans;
    }
};