class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start,end,mid;
        start=0;
        end=letters.size()-1;
        mid=start+(end-start)/2;
        char ans;
        bool flag=false;
        while(start<=end)
        {
            if(letters[mid]>target)
            {
                ans= letters[mid];
                end=mid-1;
                flag=true;
            }
            else
            {
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        if(flag)
        return ans;
        else
        return letters[0];
    }
};
