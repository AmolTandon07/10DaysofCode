class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        map<char,string>mp;
        char ch;
        string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        int x=0;
        for(ch='a';ch<='z';ch++)
        {
            mp[ch]=arr[x];
            x++;
        }

        set<string>s;
        int i,j; 
        string ans;
        for(i=0;i<words.size();i++)
        {
            string temp;
            temp=words[i];
            ans="";
            for(j=0;j<temp.length();j++)
            {
                char c;
                c=temp[j];
                ans=ans+mp[c];
            }
            s.insert(ans);
        }

        int count;
        count=s.size();
        return count;
    }
};
