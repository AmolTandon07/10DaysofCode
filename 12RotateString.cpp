class Solution {
public:
    bool rotateString(string s, string goal) {
        int i,len;
        len=s.length();
        for(i=0;i<len;i++)
        {
            char ch;
            ch=s[0];
            {
            s=s+ch;
            s.erase(0,1);
            }
            if(s==goal)
            {
            return true;
            }
        }
        return false;
    }
};
