class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,nle=0;
        int maxprofit=0;
        for(i=prices.size()-1;i>=0;i--)
        {
            maxprofit=max(maxprofit,nle-prices[i]);
            nle=max(nle,prices[i]);
        }
        return maxprofit;
    }
};
