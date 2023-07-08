class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int i,j,r;
        int count=0;
        int num1,num2;
        int fd,ld;
        for(i=0;i<nums.size();i++)
        {
            for(j=0;j<nums.size();j++)
            {
            if(i>=j)
            continue;
            num1=nums[i];
            num2=nums[j];
            if(num1==10|| num1==100 || num1==1000)
            {
                fd=1;
            }
            else
            {
            if(num1<10)
            {
                fd=num1;
            }
            else if(num1>10 && num1<=99)
            {
                r=num1%10;
                num1=num1-r;
                fd=num1/10;
            }
           else if(num1>100 && num1<=999)
            {
                r=num1%100;
                num1=num1-r;
                fd=num1/100;
            }
            else if(num1>1000 && num1<=9999)
            {
                r=num1%1000;
                num1=num1-r;
                fd=num1/1000;
            }
        }
        ld=num2%10;
        if(gcd(fd,ld)==1)
        count++;
        }
        }
        return count;
    }
};
