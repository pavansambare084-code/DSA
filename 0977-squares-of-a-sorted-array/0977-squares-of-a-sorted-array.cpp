class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int k=j;
        vector<int> v(j+1);
        while(i<=j){
            if(nums[i]*nums[i]<nums[j]*nums[j]){
            v[k]=nums[j]*nums[j];
            j--;
            k--;
            }
            else{
                 v[k]=nums[i]*nums[i];
                 i++;
                 k--;
            }
        }
        return v;
    }
};