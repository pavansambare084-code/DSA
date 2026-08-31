class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx=0;
        for(vector<int> v:accounts){
            int sum=0;
            for(int x:v){
                sum+=x;
            }
            if(sum>mx) mx=sum;
        }
        return mx;
    }
};