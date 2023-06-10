class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans;
        stack<int>s;
        int i,n;
         n=prices.size();
         ans.push_back(prices[n-1]);
         s.push(prices[n-1]);
         for(i=n-2;i>=0;i--)
         {
             while(!s.empty() && prices[i]<s.top())
             {
                 s.pop();
             }
             if(s.empty())
             ans.push_back(prices[i]);
             else
             ans.push_back(prices[i]-s.top());
             s.push(prices[i]);
         }
         reverse(ans.begin(),ans.end());
         return ans;
    }
};
