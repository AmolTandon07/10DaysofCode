class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int i,j;
        vector<int>ans;
        vector<int>ans2;
        int count=0;
        bool flag=false;
        for(j=0;j<arr2.size();j++)
        {
            count=0;
            for(i=0;i<arr1.size();i++)
            {
                if(arr2[j]==arr1[i])
                {
                ans.push_back(arr1[i]);
                }  
            }
 
            }
            for(i=0;i<arr1.size();i++)
            {
                count=0;
                for(j=0;j<ans.size();j++)
                {
                    if(arr1[i]!=ans[j])
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                }
                if(count==ans.size())
                {
                    ans2.push_back(arr1[i]);
                }
            }
        sort(ans2.begin(),ans2.end());
        for(i=0;i<ans2.size();i++)
        {
            ans.push_back(ans2[i]);
        }
        return ans;
    }
};
