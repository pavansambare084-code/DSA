int findPeakElement(int* nums, int numsSize) {
    int high=numsSize-1,low=0;
    while(low<high){
        int mid=(low+high)/2;
        if(nums[mid]<nums[mid+1]){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return low;
}