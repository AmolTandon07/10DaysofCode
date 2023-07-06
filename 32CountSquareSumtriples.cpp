class Solution {
public:
    int countTriples(int n) {
        int i,j,k,count=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                for(k=1;k<=n;k++)
                {
                    if((i*i) + (j*j) == (k*k))
                    count++;
                }
            }
        }
        return count;
    }
};
