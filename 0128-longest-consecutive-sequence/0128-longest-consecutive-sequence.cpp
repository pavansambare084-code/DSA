class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> NumSet(nums.begin(),nums.end());
        int streak=0;
        for(int x:NumSet){
            if(NumSet.find(x-1)==NumSet.end()){
                int cur_streak=1;
                int cur_no=x;
                while(NumSet.find(cur_no+1)!=NumSet.end()){
                    cur_no++;
                    cur_streak++;
                }
                if(cur_streak>streak) streak=cur_streak;
            }
        }
        return streak;
    }
};