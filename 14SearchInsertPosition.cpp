class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int s=0;
       int e=nums.size()-1;
       int mid;
       mid=s+(e-s)/2;
       bool flag=false;
       while(s<=e)
       {
           if(nums[mid]==target)
           {
               return mid;
               flag=true;
           }
           else if(nums[mid]>target)
           {
               e=mid-1;
               cout<<e<<endl;
           }
           else if(nums[mid]<target)
           {
               s=mid+1;
               cout<<s<<endl;
           }
          mid=s+(e-s)/2;
       }
       return mid;
    }
};
