class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int i,len;
      len=digits.size()-1;
      bool flag=false;
      // single element in vector

      if(digits.size()==1)
      {
        if(digits[0]==9)
        {
          digits[0]=0;
          digits.insert(digits.begin()+0,1);
          return digits;
        }
      }
      for(i=len;i>=0;i--)
      {
          if(digits[i]==9)
          {
              // wherever we are getting a zero because of
              // a carry forward we are inserting -1 over there
              // so that we donot confuse ourselves with the zeros
              // that are present in the vector
            if(i==0 && digits[1]==-1)
            {
              // here we are checking that if we are currently on the index
              // zero and the the index 1 is having the value of -1
              // so this means it has given a carry over so we take 
              // a bool flag as true and store -1 at index zero.
              flag=true;
              digits[i]=-1;
            }
            else
            {
            //   digits.insert(digits.size()-i , 0);
            digits[i]=-1;
            }
          }
          else
          {
              // if the last element is not 9
              // no need to worry
              // simply add one to the last element
              // and store it.
              int n=digits[i];
              n=n+1;
              digits[i]=n;
              break;
          }
      }
      if(flag)
      {
          // if the flag is true then certaily there is a carry over that
          // we have still not placed at the beginning of the vector
          // hence we insert 1 at the beginning of the vector.
        digits.insert(digits.begin()+0,1);
      }

      // We have to replace all the -1 in the vector with 0
      for(i=0;i<digits.size();i++)
      {
        if(digits[i]==-1)
        {
          digits[i]=0;
        }
      }
      return digits;  
    }
};
