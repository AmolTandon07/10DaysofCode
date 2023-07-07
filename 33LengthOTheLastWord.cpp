class Solution {
public:
    int lengthOfLastWord(string s) {
       int i,len=0;
       char ch1,ch2;
       int ans;
       for(i=s.length()-1;i>=1;i--)
       {
           ch1=s[i];
           ch2=s[i-1];
           if(ch1!=' ' && ch2==' ')
           {
               ans=len;
               break;
           }
           else
           {
               if(ch1!=' ')
               len++;
           }
       }
       ans=ans+1;
       return ans;
    }
};
