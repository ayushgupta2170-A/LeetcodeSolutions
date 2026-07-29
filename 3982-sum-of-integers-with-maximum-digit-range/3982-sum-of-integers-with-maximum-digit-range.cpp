class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int sum=0;

        for(int i=0;i<n;i++){
            int mx=INT_MIN;
            int mn=INT_MAX;
            int x=nums[i];

            if(x==0){
                //mx=mn=0;
            }

            while(x>0){
                int b=x%10;
                mn=min(mn,b);
                mx=max(mx,b);
                x=x/10;
            }
            ans.push_back(mx-mn);
        }

        int y=*max_element(ans.begin(),ans.end());

        for(int i=0;i<n;i++){
            if(ans[i]==y) sum+=nums[i];
        }

        return sum;
    }
};
