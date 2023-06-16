class Solution {
public:
    string largestOddNumber(string num) {
        long i,target=-1;
        for(i=num.length()-1;i>=0;i--)
        {
            
            char ch=num[i];
            if(ch!=' ')
            {
            long n=ch-48;
            if(n%2!=0 && n!=0)
            {
                // The target variable stores the exact index of the first
                // occurence of an odd number from the back of the string
            target=i;
            break;
            }
        }
        }
        

        string ans="";
        if(target==-1)
        return ans;
        int len=num.length();
        // all the elements that are after the target index needs to popped
        // back to get to largest valued odd number
        for(i=target+1;i<len;i++)
        {
            // it will pop from the back, but this loop gives us
            // the exact the number of characters that needs to be popped
            num.pop_back();
        }
        return num;
    }
};
