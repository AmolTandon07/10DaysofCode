class Solution {
public:
    bool digitCount(string num) {
        int freq[10]={0};
        int i;
        for(i=0;i<num.length();i++)
        {
            char ch;
            ch=num[i];
            int digit;
            digit=ch-48;
            freq[digit]++;
        }
        bool flag=true;
        for(i=0;i<num.length();i++)
        {
            int digit;
            char ch;
            ch=num[i];
            digit=ch-48;
            if(freq[i]!=digit)
            {
                flag=false;
                break;
            }
        }
        return flag;
    }
};
