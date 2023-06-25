class Solution {
public:
    int heightChecker(vector<int>& heights) {
       vector<int>expected;
       expected=heights;
       sort(expected.begin(),expected.end()) ;
       int i,count=0;
       for(i=0;i<heights.size();i++)
       {
           if(heights[i]!=expected[i])
           count++;
       }
       return count;
    }
};
