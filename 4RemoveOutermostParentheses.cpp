class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int>st;
        int i;
        string finalans;
        char ch;
        for(i=0;i<s.length();i++)
        {
            ch=s[i];
            if(ch=='(')
            st.push(i);
            else
            {
                if(!st.empty())
                {
                if(st.size()==1)
                {
                    s[st.top()]='a';
                    s[i]='a';
                    st.pop();
                }
                else
                {
                    st.pop();
                }
                }
                else
                {
                    st.push(i);
                }
            }
        }

        for(i=0;i<s.length();i++)
        {
            if(s[i]!='a')
            finalans=finalans+s[i];
        }
        return finalans;
    }
};
