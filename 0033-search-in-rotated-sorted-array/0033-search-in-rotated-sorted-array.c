int search(int* nums, int numsSize, int target) {
    int low=0,high=numsSize-1,mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[low]<=nums[mid]){
         if(nums[mid]>target && nums[low]<=target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    else{
        if(nums[mid]<target && nums[high]>=target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    }
    return -1;
}