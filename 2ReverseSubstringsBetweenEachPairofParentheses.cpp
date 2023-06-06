class Solution {
public:
    string reverseParentheses(string s) {
        int i,indexOfBracket=0,j=0;
        stack<char>st;
        char ch;
        string ans,finalans;
        // while(s[j]!='(' && j<s.length())
        // {
        //     initial=initial+s[j];
        //     j++;
        // }
        // if(j==s.length())
        // {
        //     return s;
        // }
        for(i=0;i<s.length();i++)
        {
            ch=s[i];
            if(ch!=')')
            st.push(ch);
            
            else
            {
                ans="";
                while(st.top()!='(' && !st.empty())
                {
                    ans=ans+st.top();
                    st.pop();
                }
                if(!st.empty() && st.top()=='(')
                st.pop();
                    for(j=0;j<ans.length();j++)
                    {
                        st.push(ans[j]);
                    }
            }

        }
       while(!st.empty()){
            finalans=st.top()+finalans;
            st.pop();
        }
       return finalans;
        
    }
};
