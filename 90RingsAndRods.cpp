class Solution {
public:
    int countPoints(string rings) {
        map<char,set<int>>mp;
        int i;
        for(i=0;i<rings.length()-1;i=i+2)
        {
            char ch1,ch2;
            ch1=rings[i];
            ch2=rings[i+1];
            mp[ch2].insert(ch1);
        }

        int ans=0;

        for(auto it:mp)
        {
            set<int>s;
            s=it.second;
            if(s.size()==3)
            {
                cout<<it.first<<endl;
                ans++;
            }
        }

        return ans;
    }
};
