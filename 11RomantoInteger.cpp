class Solution {
public:
    int romanToInt(string s) {
      int i,ans=0;
      char ch1,ch2;
      for(i=0;i<s.length();i=i+1)
      {
          ch1=s[i];
          if(i<s.length()-1)
          ch2=s[i+1];
          // case1
          if(ch1=='I'&& ch2=='V')
          {
              ans=ans+4;
              i=i+1;
          }
          else if(ch1=='I'&& ch2=='X')
          {
              ans=ans+9;
              i=i+1;
          }
          else if(ch1=='X'&& ch2=='L')
          {
              ans=ans+40;
              i=i+1;
          }
          else if(ch1=='X'&& ch2=='C')
          {
              ans=ans+90;
              i=i+1;
          }
          else if(ch1=='C'&& ch2=='D')
          {
              ans=ans+400;
              i=i+1;
          }
          else if(ch1=='C'&& ch2=='M')
          {
              ans=ans+900;
              i=i+1;
          }
          // case 2
          else
          {
            if(ch1=='I')
            ans=ans+1; 
            if(ch1=='V')
            ans=ans+5; 
            if(ch1=='X')
            ans=ans+10; 
            if(ch1=='L')
            ans=ans+50; 
            if(ch1=='C')
            ans=ans+100;   
            if(ch1=='D')
            ans=ans+500; 
            if(ch1=='M')
            ans=ans+1000; 


            // if(ch2=='I')
            // ans=ans+1; 
            // if(ch2=='V')
            // ans=ans+5; 
            // if(ch2=='X')
            // ans=ans+10; 
            // if(ch2=='L')
            // ans=ans+50; 
            // if(ch2=='C')
            // ans=ans+100;   
            // if(ch2=='D')
            // ans=ans+500; 
            // if(ch2=='M')
            // ans=ans+1000; 
            // i=i+2;
          }


      }  
      return ans;
    }
};
