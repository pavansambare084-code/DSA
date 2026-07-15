class Solution {
public:
    bool judgeSquareSum(int c) {
        long left=0;
        long right=(long)sqrt(c);
        while(left<=right){
            if(left*left + right*right ==c){
                return 1;
            }
            else if(left*left + right*right < c){
                left++;
            }
            else{
                right--;
            }
        }
        return 0;
    }
};