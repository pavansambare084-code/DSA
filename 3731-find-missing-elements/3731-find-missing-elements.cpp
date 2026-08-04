class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        map<int,int> mpp;
        int n=nums.size(),max,sec_max;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        auto t1=prev(mpp.end()),t2=mpp.begin();
        max=t1->first;
        sec_max=t2->first;
        for(int i=sec_max;i<=max;i++){
            if(mpp.find(i)==mpp.end()) ans.push_back(i);
        }
        return ans;
    }
};