class Solution {
public:
    int countHillValley(vector<int>& a) {
        int i,j;
        int n=a.size();
        int sf=0,bf=0,sb=0,bb=0;
        int ans=0;
        for(i=1;i<n-1;i++)
        {
            sf=0,bf=0,sb=0,bb=0;
            int ele=a[i];

            for(j=i-1;j>=0;j--)
            {
                if(ele<a[j])
                {
                    bf++;
                    break;
                }
                 if(ele>a[j])
                {
                    sf++;
                    break;
                }
            }

            for(j=i+1;j<n;j++)
            {
                if(ele<a[j])
                {
                    bb++;
                    break;
                }
                 if(ele>a[j])
                {
                    sb++;
                    break;
                }
            }

            if((bf>0 && bb>0) || (sf>0 && sb>0))
            {
                if(a[i]!=a[i-1])
                ans++;
            }
            
        }
        return ans;
    }
};
