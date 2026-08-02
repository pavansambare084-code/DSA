class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        while(left<=right){
            int temp=left;
            int flag=0;
            while(temp>0){
                int a=temp%10;
                if(a!=0 && (left%a==0)){
                    
                }
                else{
                    flag=1;
                    break;
                }
                temp/=10;
            }
            if(flag==0) ans.push_back(left);
            left++;
        }
        return ans;
    }
};