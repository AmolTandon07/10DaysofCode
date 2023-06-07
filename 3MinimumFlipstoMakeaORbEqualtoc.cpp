class Solution {
public:
    int minFlips(int a, int b, int c) {
       long d1,d2,d3;
       int ans=0;
       while(a||b||c)
       {
           d1=a&1;
           d2=b&1;
           d3=c&1;
           if(d3==0)
           {
               ans=ans+d1+d2;
           }
           else
           {
               if(d1==0 && d2==0)
               {
                   ans=ans+1;
               }
           }
           a=a>>1;
           b=b>>1;
           c=c>>1;
       } 
       return ans;
    }
};
