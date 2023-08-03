class Solution {
public:
    int captureForts(vector<int>& forts) {
        int left,right;
        left=0;
        right=forts.size()-1;
        int countLeft=0 , countRight=0;
        bool flagLeft=false;
        bool flagRight=false;

        int ansRight=0,ansLeft=0;
        while(left!=forts.size() || right!=-1)
        {
            if(forts[left]==1)
            {
                if(flagLeft)
                {
                countLeft=0;
                }
                flagLeft=true;
            }

            if(forts[right]==1)
            {
                if(flagRight) // this is necessary as we have to pass over only enemy territory
                {
                countRight=0;
                }
                flagRight=true;
            }

            if(forts[left]==-1)
            {
                flagLeft=false;
                ansLeft=max(countLeft,ansLeft);
                countLeft=0;
            }

            if(forts[right]==-1)

            {
                
                flagRight=false;
                ansRight=max(countRight,ansRight);
                countRight=0;
            }

            if(forts[left]==0)
            {
                if(flagLeft)
                {
                    countLeft++;
                }
            }

            if(forts[right]==0)
            {
                if(flagRight)
                {
                    countRight++;
                }
            }


            left++;
            right--;
        }
        int ans=0;
        ans=max(ansRight,ansLeft);
        return ans;
    }
};
