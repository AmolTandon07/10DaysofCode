class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        set<int>slope;
        sort(coordinates.begin(),coordinates.end());
        int i,x1,x2,y1,y2,m;
        for(i=0;i<coordinates.size()-1;i++)
        {
            x1=coordinates[i][0];
            y1=coordinates[i][1];
            x2=coordinates[i+1][0];
            y2=coordinates[i+1][1];
            if((x2-x1)==0)
            slope.insert(INT_MIN);
            else
            {
            m=(y2-y1)/(x2-x1);
            slope.insert(m);
            }
        }
        if(slope.size()==1)
        return true;
        else
        return false;

    }
};
