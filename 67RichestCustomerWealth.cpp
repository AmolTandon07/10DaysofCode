class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i,j;
        int sum=0,maxi=INT_MIN;
        for(i=0;i<accounts.size();i++)
        {
            sum=0;
            for(j=0;j<accounts[0].size();j++)
            {
                sum=sum+accounts[i][j];
            }
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};
