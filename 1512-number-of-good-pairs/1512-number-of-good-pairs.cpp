class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int  cnt=0,n=nums.size();
        unordered_map<int,int> ans;
        for(int i=0;i<n;i++){
            ans[nums[i]]++;
        }
        for(auto x:ans){
            if(x.second>1){
                cnt+=x.second*(x.second-1)/2;
            }
        }
        return cnt;
    }
};