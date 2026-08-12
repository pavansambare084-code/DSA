class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>mul(n);
        mul[0]=1;
        for(int i=1;i<n;i++){
            mul[i]=mul[i-1]*nums[i-1];
        }
        int temp=1;
        for(int i=n-2;i>=0;i--){
            temp*=nums[i+1];
            mul[i]*=temp;
        }
        return mul;
    }
};