class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        int i;
        set<int>s;
        for(i=0;i<n;i++)
        {
            int number=nums[i];
            int rev=0;
            while(number!=0)
            {
                int r=number%10;
                rev=rev*10+r;
                number=number/10;
            }
            nums.push_back(rev);
        }
        for(i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }

        int ans=s.size();
        return ans;
    }
};
