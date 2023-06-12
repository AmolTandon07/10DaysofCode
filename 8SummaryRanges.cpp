class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int i;
        string temp;
        vector<string>ans;
        int num1,num2;
        if(nums.size()==0)
        return ans;
        if(nums.size()==1)
        {
            string element;
            element=to_string(nums[0]);
            ans.push_back(element);
            return ans;
        }
        for(i=1;i<nums.size();i++)
        {
            num1=nums[i-1];
            num2=nums[i];
            if(num2!=num1+1)
            {
                if(temp.length()!=0)
                {
                    ans.push_back(temp);
                    temp="";
                }
                else
                {
                    string element=to_string(num1);
                    ans.push_back(element);
                }
               
            }
            else
            {
                if(temp.length()==0)
                temp=to_string(num1)+"->"+to_string(num2);
                else
                {
                    // int len;
                    // len=temp.length();
                    // len=len-1;
                    int pos;
                    pos=temp.find('>');
                    if(pos!=string::npos)
                    pos=pos+1;
                   temp.replace(temp.begin() + pos, temp.end(), to_string(num2));
                }
            }
        }
        if(temp.length()!=0)
        ans.push_back(temp);
        else
        ans.push_back(to_string(num2));
        return ans;
    }
};
