class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>v(nums.size());
        v[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            v[i]=max(nums[i],v[i-1]);
        }
        vector<int>r(nums.size());
        r[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            r[i]=min(nums[i],r[i+1]);
        }
        for(int i=0;i<nums.size();i++){
            if(v[i]-r[i]<=k){
                return i;
            }
        }
        return -1;
    }
};