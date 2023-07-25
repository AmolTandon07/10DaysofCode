class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int len1=a.length();
        int len2=b.length();
        int minlen=min(len1,len2);
        int maxlen=max(len1,len2);
        int diff=maxlen-minlen;
        int i;
        if(len1>len2)
        for(i=1;i<=diff;i++)
        {
            b='0'+b;
            len2=b.length();
        }
        else if(len2>len1)
        for(i=1;i<=diff;i++)
        {
            a='0'+a;
            len1=a.length();
        }

        
        char buffer='0';
        for(i=0;i<maxlen;i++)
        {
            char ch1=a[len1-i-1];
            char ch2=b[len2-i-1];
            if(ch1=='1' && ch2=='0')
            {
                if(buffer=='0')
                ans='1'+ans;
                else
                {
                ans='0'+ans;
                buffer='1';
                }

            }
            else if(ch1=='0' && ch2=='1')
            {

            if(buffer=='0')
                ans='1'+ans;
                else
                {
                ans='0'+ans;
                buffer='1';
                }
            }
            else if(ch1=='0' && ch2=='0')
            {
            if(buffer=='0')
            ans='0'+ans;
            else
            {
            ans='1'+ans;
            buffer='0';
            }
            }
            else if(ch1=='1' && ch2=='1')
            {
                if(buffer=='0')
                {
                ans='0'+ans;
                buffer='1';
                }
                else
                {
                ans='1'+ans;
                buffer='1';
                }
            }
            

        }
        if(buffer=='1')
        ans='1'+ans;
        return ans;
    }
};
