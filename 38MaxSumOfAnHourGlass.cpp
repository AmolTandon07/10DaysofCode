class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int i,j;
        int row,col;
        int sum=0;
        int maxi=INT_MIN;
        row=grid.size();
        col=grid[0].size();
        for(i=0;i<row-2;i++)
        {
            for(j=0;j<col-2;j++)
            {
                sum=grid[i][j]+grid[i][j+1]+grid[i][j+2]
                +grid[i+1][j+1]+grid[i+2][j]+grid[i+2][j+1]+
                grid[i+2][j+2];

            maxi=max(sum,maxi);
        }
        }

        return maxi;
    }
};
