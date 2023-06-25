class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int i;
        int freq[26]={0};
        bool ans=true;
        for(i=0;i<magazine.length();i++)
        {
            freq[magazine[i]-'a']++;
        }


         for(i=0;i<ransomNote.length();i++)
        {
           if(freq[ransomNote[i]-'a']!=0)
           {
               freq[ransomNote[i]-'a']--;
           }
           else
           {
               ans=false;
               break;
           }
        }
        return ans;
    }
};
