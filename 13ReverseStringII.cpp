class Solution {
public:
    string reverseStr(string s, int k) {
         int i,p1,p2;
         for(i=0;i<s.length();i=i+(2*k))
         {
        //  p1=i;
        //  p2=i+(2*k)-1;
         if(i+(2*k)-1<s.length())
         reverse(s.begin()+i , (s.begin()+i+(k)));
         else
         break;
         }

         if(i>s.length())
         {
             return s;
         }
         else
         {
             if(s.length()-i<k)
             {
                 reverse(s.begin()+i , (s.begin()+s.length()));
             }
             else if(s.length()-i>=k && s.length()-i<(2*k))
             {
                  reverse(s.begin()+i , (s.begin()+i+k));
             }
         }
         return s;
    }
    
};
