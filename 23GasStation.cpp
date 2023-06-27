class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int balance=0;
        int deficit=0;
        int start=0;
        int i;
        for(i=0;i<gas.size();i++)
        {
            balance+=gas[i]-cost[i];
            if(balance<0)
            {
                deficit=deficit+balance;
                balance=0;
                start=i+1;
            }

            
        }
        if(deficit+balance>=0)
            return start;
            else
            return -1;
    }
};
