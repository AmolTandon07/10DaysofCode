class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int l,r;
        long long sum=0;
        sort(skill.begin(),skill.end());
        l=0;
        r=skill.size()-1;
        int target=skill[0]+skill[skill.size()-1];
        while(l<=r)
        {
            if(skill[l]+skill[r]==target)
            {
                sum=sum+(skill[l]*skill[r]);
                l++;
                r--;
            }
            else
            {
                sum=-1;
                break;
            }
            
        }
        return sum;

    }
};
