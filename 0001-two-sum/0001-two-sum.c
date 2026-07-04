/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,j,x,y;
    for(i=0;i<numsSize-1;i++){
        for(j=1;j<numsSize;j++){
            if(i==j){
                continue;
            }
            if(nums[i]+nums[j]==target){
                x=i,y=j;
                break;
            }
        }
    }
    int *ans=(int*)malloc(2*sizeof(int));
    ans[0]=x;
    ans[1]=y;

    *returnSize=2;
    return ans;
}