class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map < int , int > mpp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int a=nums[i];
            int next=target - a;
            if(mpp.find(next) != mpp.end()){
                return {mpp[next],i};
            }
            mpp[a]=i;
        }
          return {-1,-1};
    }
};