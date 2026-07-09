/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* concatWithReverse(int* nums, int numsSize, int* returnSize) {
    int *ar=malloc(sizeof(int *)*numsSize);
    for(int i=0;i<numsSize;i++){
        ar[i]=nums[i];
    }
    int i=0;
    for(int j=numsSize*2-1;j>=numsSize;j--){
        ar[j]=nums[i];
        i++;
    }
    *returnSize=2*numsSize;
    return ar;
}