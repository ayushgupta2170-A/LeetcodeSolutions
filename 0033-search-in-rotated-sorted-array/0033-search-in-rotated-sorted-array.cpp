class Solution {
public:
    int search(vector<int>& a,int t) {
        int l=0,r=a.size()-1;

        while(l<r){
            int m=l+(r-l)/2;
            if(a[m]>a[r]) l=m+1;
            else r=m;
        }

        int p=l;
        l=0,r=a.size()-1;

        if(t>=a[p]&&t<=a[r]) l=p;
        else r=p-1;

        while(l<=r){
            int m=l+(r-l)/2;
            if(a[m]==t) return m;
            if(a[m]<t) l=m+1;
            else r=m-1;
        }

        return -1;
    }
};
