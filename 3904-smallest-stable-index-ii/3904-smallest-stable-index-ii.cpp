class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        if(k==0 && nums.size()==1) return 0;
        int n=nums.size();
        vector<int> l(n);
        l[0]=nums[0];
        vector<int> r(n);
        r[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            l[i]=max(nums[i],l[i-1]);
        }
        for(int i=n-2;i>=0;i--){
           r[i]=min(r[i+1],nums[i]);
        }
        for(int i=0;i<n;i++){
            if(l[i]-r[i]<=k) return i;
        }
        return -1;
    }
};