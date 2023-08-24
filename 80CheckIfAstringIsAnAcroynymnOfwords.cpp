class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
      int i;
      string temp,ans;
      for(i=0;i<words.size();i++)
      {
          temp=words[i];
          ans=ans+temp[0];
      } 

      if(ans==s)
      return true;
      else
      return false; 
    }
};
