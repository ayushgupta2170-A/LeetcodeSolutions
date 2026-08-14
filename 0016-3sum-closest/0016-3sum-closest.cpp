class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    
    int n=nums.size();
    int mindiff=INT_MAX;
    int ans=0;

    for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
        for(int k=j+1;k<n;k++){
            int sum=nums[i]+nums[j]+nums[k];
            int diff=abs(sum-target);

            if(diff<mindiff){
                mindiff=diff;
                ans=sum;
            }
        }
    }
}
        
        return ans;

    }
};