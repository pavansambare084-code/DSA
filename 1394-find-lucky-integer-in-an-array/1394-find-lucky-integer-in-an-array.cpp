class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int ,int> ans;
        for(int i:arr){
            ans[i]++;
        }
        int mx=0;
        for(auto x:ans){
            if(x.first==x.second){
                if(x.first>mx) mx=x.first;
            }
        }
        if(mx!=0) return mx;
        return -1;
    }
};