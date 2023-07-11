class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftsum;
        vector<int>rightsum;
        leftsum.push_back(0);
        int i,sum=0;
        for(i=0;i<nums.size()-1;i++)
        {
            sum=sum+nums[i];
            leftsum.push_back(sum);
        }
         sum=0;
         for(i=nums.size()-1;i>0;i--)
        {
            sum=sum+nums[i];
            rightsum.push_back(sum);
        }
        reverse(rightsum.begin(),rightsum.end());
        rightsum.push_back(0);

        vector<int>ans;
        for(i=0;i<nums.size();i++)
        {
            ans.push_back(abs(leftsum[i]-rightsum[i]));
        }
        return ans;
    }
};
