class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,bool>mp;
        int i,j;
        char ch;
        bool flag=true;
        string temp;
        vector<string>ans;
        for(i=0;i<allowed.length();i++)
        {
            mp[allowed[i]]=true;
        }

        for(i=0;i<words.size();i++)
        {
             temp=words[i];
             flag=true;
            for(j=0;j<temp.length();j++)
            {
                if(!mp.count(temp[j]))
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            ans.push_back(temp);
        }
        int finalans;
        finalans=ans.size();
        return finalans;
    }
};
