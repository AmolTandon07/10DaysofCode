class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int i,num;
        vector<int>ans;
        for(i=nums.size()-1;i>=0;i--)
        {
            num=nums[i];
            while(num!=0)
            {
                int r=num%10;
                ans.push_back(r);
                num=num/10;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
