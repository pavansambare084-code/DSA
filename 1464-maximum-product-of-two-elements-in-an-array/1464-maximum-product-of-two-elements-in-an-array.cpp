class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=INT_MIN,max2=INT_MIN;
        int n=nums.size();
        if(n==2)return (nums[0]-1)*(nums[1]-1);
        for(int i=0;i<n;i++){
            if(nums[i]>max1){
                max2=max1;
                max1=nums[i];
            }
            else if(nums[i]>max2){
                max2=nums[i];
            }
        }
        return (max1-1)*(max2-1);
    }
};