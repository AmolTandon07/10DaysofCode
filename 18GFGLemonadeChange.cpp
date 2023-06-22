//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        int i,fivecoin=0 , tencoin=0 , twentycoin=0;
        bool ans=true;
        for(i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            {
                fivecoin++;
            }
            else if(bills[i]==10)
            {
                tencoin++;
                
                //return change
                if(fivecoin!=0)
                {
                    fivecoin--;
                }
                else
                {
                    ans=false;
                    break;
                }
            }
            
            else if(bills[i]==20)
            {
               twentycoin++;
               
               //return change
               if(fivecoin==0)
               {
                   ans=false;
                   break;
               }
               else 
               {
                   if(tencoin!=0)
                   {
                   tencoin--;
                   fivecoin--;
                   }
                   else
                   {
                       if(fivecoin>3)
                       fivecoin=fivecoin-3;
                       else
                       {
                           ans=false;
                           break;
                       }
                   }
               }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends
