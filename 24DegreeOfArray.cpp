class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
       int freq[50000]={0};
       int i,maxi,firstIndex,lastIndex=0,len;
       vector<int>ans;
       int mini=INT_MAX;
       if(nums.size()==1)
       return 1;
       for(i=0;i<nums.size();i++)
       {
           freq[nums[i]]++;
       } 
       
       int number,n;
       n=nums.size();
       maxi=*max_element(freq , freq+50000);
       for(i=0;i<50000;i++)
       {
           if(freq[i]==maxi)
           {
               ans.push_back(i);
           }
       }
       int j;
       for(j=0;j<ans.size();j++)
       {
           int count=0;
       for(i=0;i<nums.size();i++)
       {
           if(nums[i]==ans[j])
           {
               if(count==0)
               {
                   firstIndex=i;
                   count++;
               }
               else
               {
                   lastIndex=i;
               }
           }
       }
       len=lastIndex-firstIndex+1;
       mini=min(mini,len);
       }


    //    for(i=0;i<nums.size();i++)
    //    {
           
    //    }

       return mini;
       
    }
};
