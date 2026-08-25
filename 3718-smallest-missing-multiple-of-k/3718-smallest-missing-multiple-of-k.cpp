class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {\
    int y=k;
        unordered_map<int,int> mpp;
        for(int x:nums){
            mpp[x]++;
        }
        do{
            if(mpp.count(k)==0){
                return k;
            }
            k+=y;
        }while(1);
        return 0;
    }
};