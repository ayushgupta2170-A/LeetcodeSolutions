class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(auto x:nums){
            int digitcount=0;
            while(x>0){
                digitcount++;
                x/=10;

             }
             if(digitcount&1){
                continue;
             }
                else{
                    count++;
                }
            }

           
        return count;
    }
};