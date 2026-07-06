int findMin(int* nums, int numsSize) {
    int low=0,high=numsSize-1,mid;
    while(low<high){
        mid=low+(high-low)/2;
        if(nums[mid]>nums[high]){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return nums[high];
}