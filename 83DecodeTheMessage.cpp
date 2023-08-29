class Solution {
public:
    string decodeMessage(string key, string message) {
        int i;
        map<char,char>mp;
        string ans;
        char ele='a';
        for(i=0;i<key.length();i++)
        {
            char ch;
            ch=key[i];
            if(!mp.count(ch) && ch!=' ')
            {
            mp[ch]=ele;
            ele++;
            }
        }

        for(i=0;i<message.length();i++)
        {
            char ch;
            ch=message[i];
            if(ch==' ')
            ans=ans+' ';
            else
            ans=ans+mp[ch];
        }
        return ans;
    }
};
