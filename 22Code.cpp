class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      int i,j;
      vector<int>merged;
      double ans;
      for(i=0;i<nums1.size();i++)
      {
         merged.push_back(nums1[i]); 
      } 

      for(i=0;i<nums2.size();i++)
      {
         merged.push_back(nums2[i]); 
      } 

      sort(merged.begin() , merged.end());

      int mergedSize=merged.size();
      if(mergedSize%2!=0)
      {
          int index=mergedSize/2;
          ans=merged[index];
      } 

      else

      {
          int index1=mergedSize/2;
          int index2;
          index2=index1-1;
          ans=merged[index1] +merged[index2];
          ans=ans/2;
      }
      return ans;
    }
};
