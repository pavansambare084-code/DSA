class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int n=1,m=1;
        for(int i=2;i<nums.size();i++){
            if(arr1[n-1]>arr2[m-1]) 
            {
                arr1.push_back(nums[i]);
                n++;
            }
            else{
                 arr2.push_back(nums[i]);
                 m++;
        }
        }
        vector<int> ans;
        for(int x:arr1) ans.push_back(x);
        for(int x:arr2) ans.push_back(x);
        return ans;
    }
};