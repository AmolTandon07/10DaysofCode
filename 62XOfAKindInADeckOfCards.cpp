class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int>mp;

        int i;
        int ele;
        if(deck.size()<=1)
        return false;
        for(i=0;i<deck.size();i++)
        {
            mp[deck[i]]++;
        }

        bool flag=true;
        int mini=INT_MAX;
        for(auto it: mp)
        {
            mini=min(it.second,mini);
        }
        cout<<mini<<endl;
        for(auto ij: mp)
        {
            if(ij.second!=mini)
            {
                cout<<ij.second<<endl;
                for(auto it: mp)
                {
                    if(gcd(it.second , ij.second)==1)
                    {
                        flag=false;
                        break;
                    }
                }
            }
        }

        if(flag)
        return true;
        else
        return false;
    }
};
