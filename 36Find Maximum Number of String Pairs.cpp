class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
      set<string>s;
      int i,count=0;
      for(i=0;i<words.size();i++)
      {
          s.insert(words[i]);
      }  

      for(i=0;i<words.size();i++)
      {
          string temp;
          temp=words[i];
          reverse(temp.begin(),temp.end());
          if(s.count(temp) && temp!=words[i])
          {
          cout<<temp<<endl;
          count++;
          s.erase(s.find(words[i]));
          }
      }  
      return count;
    }
};
