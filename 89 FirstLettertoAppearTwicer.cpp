class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int>mp;
        int i;
        char ans;
        bool flag=false;
        for(i=0;i<s.length();i++)
        {
            char ch;
            ch=s[i];
            mp[ch]++;
            for(auto it : mp)
            {
                if(it.second == 2)
                {
                    ans=it.first;
                    flag=true;
                    break;
                }
            }
            if(flag)
            break;
        }
        return ans;
    }
};
