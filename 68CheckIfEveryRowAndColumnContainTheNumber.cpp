class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int arr[101]={0};
        int n=matrix.size();
        bool flag=true;
        int i,j,k;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                int num=matrix[i][j];
                arr[num]++;
            }


            for(k=1;k<=n;k++)
            {
                if(arr[k]==1)
                {
                    arr[k]=0;
                }
                else
                {
                    flag=false;
                    break;
                }
            }

            



            for(j=0;j<n;j++)
            {
                int num=matrix[j][i];
                arr[num]++;
            }

            for(k=1;k<=n;k++)
            {
                if(arr[k]==1)
                {
                    arr[k]=0;
                }
                else
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
        return true;
        else
        return false;
    }
};
