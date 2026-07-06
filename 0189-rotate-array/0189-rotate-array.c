void rotate(int* nums, int numsSize, int k) {
    int i=0,j=numsSize-1;
    k=k%numsSize;
    while(i<j){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        i++;
        j--;
    }
    int left=k,right=numsSize-1;
    while(left<right){
        int temp=nums[left];
        nums[left]=nums[right];
        nums[right]=temp;
        left++;
        right--;
    }
    int l=0,m=k-1;
    while(l<m){
        int temp=nums[l];
        nums[l]=nums[m];
        nums[m]=temp;
        l++;
        m--;
    }
}