class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        if(n==2) return nums[0]*nums[1];
        if(n==3) return nums[0]*nums[1]*nums[2];
        int three=INT_MIN,two=INT_MIN,one=INT_MIN;
        int min1=INT_MAX,min2=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                if(nums[i]<min1){
                min2=min1;
                min1=nums[i];
            }
            else if(nums[i]<min2){
                min2=nums[i];
            }
        }
            if(nums[i]>one){
                three=two;
                two=one;
                one=nums[i];
            }
            else if(nums[i]>two){
                three=two;
                two=nums[i];
            }
            else if(nums[i]>three){
                three=nums[i];
            }
        }
        int max1=one*two*three;
        if(min1!=INT_MAX && min2!=INT_MAX){
        int max2=one*min1*min2;
        int m=max(max1,max2);
        return m; 
        }
        return max1;
    }
};