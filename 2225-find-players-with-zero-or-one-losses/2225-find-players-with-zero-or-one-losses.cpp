class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n=matches.size();
        vector<int> ans1,ans2;
        map<int,int>win;
        map<int,int>lost;
        for(vector<int> v:matches){
            win[v[0]]++;
            lost[v[1]]++;
        }
        for(auto it:win){
            if(lost.count(it.first)==0){
                ans1.push_back(it.first);
            }
        }
        for(auto it:lost){
            if(it.second==1){
                ans2.push_back(it.first);
            }
        }
        vector<vector<int>>ans;
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};