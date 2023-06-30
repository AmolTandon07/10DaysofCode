class Solution {
public:
    int countPrimes(int n) {
        bool prime[n+1];
        long i,j,count=0;
        for(i=2;i<n;i++)
        {
            prime[i]=true;
        }
        for(i=2;i<n;i++)
        {
            if(prime[i])
            {
                for(j=i*i;j<n;j=j+i)
                {
                    prime[j]=false;
                }
            }
        }

        for(i=2;i<n;i++)
        {
            if(prime[i])
            count++;
        }
        return count;
    }
};
