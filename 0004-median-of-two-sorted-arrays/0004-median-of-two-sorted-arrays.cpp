class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        int i=0,j=0;
        vector<int> v;
        while(i<n1 && j<n2){
        if(nums1[i]<nums2[j]){
            v.push_back(nums1[i]);
            i++;
        }
        else{
            v.push_back(nums2[j]);
            j++;
        }
    }
    while(i<n1){
        v.push_back(nums1[i]);
        i++;
    }
    while(j<n2){
        v.push_back(nums2[j]);
        j++;
    }
    double median;
    int n=v.size();
    if(n%2!=0){
    int mid=(n/2);
    median=v[mid]*1.0;
    return median;
    }
    else{
        int mid1=n/2-1;
        int mid2=mid1+1;
        median=(v[mid1]+v[mid2])/2.0;
        return median;
    }
    }
};