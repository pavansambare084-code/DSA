class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = 0;
        for(int i : nums){
            i = i % 3;
            if(i != 0) n++;
        }
        return n;
    }
};