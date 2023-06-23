class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        int i,count=0;
        for(i=0;i<tickets.size();i++)
        {
            q.push(i);
        }

        while(tickets[k]!=0)
        {
            int index;
            index=q.front();
            q.pop();
            if(tickets[index]==0)
            continue;
            tickets[index]--;
            q.push(index);
            count++;
        }
        return count;
    }
};
