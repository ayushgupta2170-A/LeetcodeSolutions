class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& a, vector<int>& b) {
        set<int> s1(a.begin(),a.end()),s2(b.begin(),b.end());
        vector<vector<int>> ans(2);

        for(int x:s1) if(!s2.count(x)) ans[0].push_back(x);
        for(int x:s2) if(!s1.count(x)) ans[1].push_back(x);

        return ans;
    }
};
