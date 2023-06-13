class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector<string>row;
        vector<string>col;
        int i,j,count=0;
        string temp;
        for(i=0;i<grid.size();i++)
        {
            temp="";
            for(j=0;j<grid.size();j++)
            {
                string element;
                element=to_string(grid[i][j]);
                temp=temp+element+'a';
            }
            row.push_back(temp);
        }

      for(i=0;i<grid.size();i++)
        {
            temp="";
            for(j=0;j<grid.size();j++)
            {
                string element;
                element=to_string(grid[j][i]);
                temp=temp+element+'a';
            }
            col.push_back(temp);
        }

        for(i=0;i<row.size();i++)
        {
            for(j=0;j<col.size();j++)
            {
                if(row[i]==col[j])
                count++;
            }
        }
        return count;

    }
};
