class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i,count=0;
        bool flag=false;
        for(i=0;i<arr.size();i++)
        {
            if(arr[i]%2!=0)
            {
                count++;
            }
            else
            {
                if(count!=0 && count>=3)
                {
                    flag=true;
                    break;
                }
                else
                {
                    count=0;
                }
            }
        }
        if(count!=0 && count>=3 )
                {
                    flag=true;   
                }
        return flag;
    }
};
