//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        // code here
        int freq[26]={0};
        int i,mx=INT_MIN;
        for(i=0;i<tasks.size();i++)
        {
            char ch;
            ch=tasks[i];
            freq[ch-'A']++;
            mx=max(mx,freq[ch-'A']);
        }
        
        int count=0;
        for(i=0;i<26;i++)
        {
            if(freq[i]==mx)
            {
                count++;
            }
        }
        
       int ans;
       ans=(K+1)*(mx-1)+count;
       int maxi;
       maxi=max(ans,N);
       return maxi;
      
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends
