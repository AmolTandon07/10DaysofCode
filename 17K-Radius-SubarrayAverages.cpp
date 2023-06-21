class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int windowsize=2*k+1;
        int i,n;
        long windowsum=0;
        n=nums.size();
        vector<int>ans(n,-1);
        if(n<windowsize)
        return ans;
        for(i=0;i<nums.size();i++)
        {
            windowsum+=nums[i];

            if(i-windowsize>=0)//out of window element removal
            {
                windowsum=windowsum-nums[i-windowsize];
            }
            if(i>=windowsize-1)
            {
                ans[i-k]=windowsum/windowsize;
            }
        }
        return ans;
    }
};
