class Solution {
public:
    int balancedStringSplit(string s) {
        int i,j;
        char ch;
        int alphaR=0,alphaL=0,count=0;
        for(i=0;i<s.length();i++)
        {
            ch=s[i];
            if(ch=='R')
            alphaR++;
            else
            alphaL++;

            if(alphaR==alphaL)
            {
            count++;
            alphaR=0;
            alphaL=0;
            }
        }
        return count;
    }
};
