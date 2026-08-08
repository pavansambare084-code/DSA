class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        long long s1=0,s2=0;
        for(int x:aliceSizes){
            s1+=x;
        }
        for(int x:bobSizes){
            s2+=x;
        }
        sort(aliceSizes.begin(),aliceSizes.end());
        sort(bobSizes.begin(),bobSizes.end());
        int d=(s1-s2)/2,n=aliceSizes.size(),m=bobSizes.size();
        int i=0,j=0;
        while(i<n && j<m){
            int diff=aliceSizes[i]-bobSizes[j];
            if(diff==d){
                return {aliceSizes[i],bobSizes[j]};
            }
            else if(diff<d){
                i++;
            }
            else{
                j++;
            }
        }
        return {};
    }
};