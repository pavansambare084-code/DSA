class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        vector<int> v;
        while(i<=j){
            if(nums[i]*nums[i]<nums[j]*nums[j]){
            v.insert(v.begin(), nums[j]*nums[j]);
            j--;
            }
            else{
                 v.insert(v.begin(), nums[i]*nums[i]);
                 i++;
            }
        }
        return v;
    }
};