class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int i;
        string original="";
        bool flag=false;
        for(i=0;i<words.size();i++)
        {
            string temp="";
            temp=words[i];
            original=temp;
            reverse(temp.begin(),temp.end());
            if(temp==original)
            {
                flag=true;
                break;
               
            }
        }
        string ans="";
        if(!flag)
        return ans;
        return original;
    }
};
