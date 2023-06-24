class Solution {
public:
    int countEven(int num) {
        int i,count=0,s=0,n;
        for(i=1;i<=num;i++)
        {
            n=i;
            s=0;
            while(n!=0)
            {
                int r;
                r=n%10;
                s=s+r;
                n=n/10;
            }
            if(s%2==0)
            count++;
        }
        return count;
    }
};
