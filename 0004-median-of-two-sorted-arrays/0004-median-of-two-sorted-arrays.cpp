class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1,vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size();
        int i=0,j=0;
        int prev=0,cur=0;
        int t=m+n;

        for(int k=0;k<=t/2;k++){
            prev=cur;
            if(i<m&&(j>=n||nums1[i]<=nums2[j]))
                cur=nums1[i++];
            else
                cur=nums2[j++];
        }

        if(t%2)return cur;
        return (prev+cur)/2.0;
    }
};