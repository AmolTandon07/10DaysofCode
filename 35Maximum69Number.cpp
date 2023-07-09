class Solution {
public:
    int maximum69Number (int num) {
        string n;
        n=to_string(num);
        int i;
        for(i=0;i<n.length();i++)
        {
            if(n[i]=='6')
            {
                n[i]='9';
                break;
            }
        }
        int ans;
        ans=stoi(n);
        return ans;

    }
};
