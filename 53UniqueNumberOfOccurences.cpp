class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>freq;
        int i,count=0;
        bool flag=true;
        for(i=0;i<arr.size();i++)
        {
        freq[arr[i]]++;
        }
        for(auto it:freq)
        {
            // int ele=it.second;
            count=0;
            for(auto ij: freq)
            {
                if(ij.second==it.second)
                {
                    count++;
                }
            }
            if(count>1)
            {
            flag=false;
            break;
            }
        }

        return flag;
    }
};
