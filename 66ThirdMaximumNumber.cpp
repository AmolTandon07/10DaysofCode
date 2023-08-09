class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s;
        int k=0;
        int i=0;
        int ans;
        for(i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
      
       vector<int>v;
       for(auto it: s)
       {
           v.push_back((it));
       }

       sort(v.begin(), v.end() , [](int a , int b){
         return((a)>(b));
       });
       if(v.size()<3)
       ans=v[0];
       else
       ans=v[2];
       return ans;
    }
};
