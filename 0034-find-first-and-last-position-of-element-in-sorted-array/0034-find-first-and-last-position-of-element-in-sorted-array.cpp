class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> ar;
        int i=0,j=0,n=nums.size();
        while(i<n){
            if(nums[i]==target){
                break;
            }
            i++;
        }
        j=i;
        while(j<n && nums[j]==target){
            j++;
        }
        if(i==n){
            ar.push_back(-1);
            ar.push_back(-1);
            return ar;
        }
        ar.push_back(i);
        ar.push_back(j-1);
        return ar;

    }
};