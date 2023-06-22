//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    int freq[26]={0};
		    int i;
		    queue<int>q;
		    string ans;
		    for(i=0;i<A.size();i++)
		    {
		        freq[A[i]-'a']++;
		        q.push(A[i]);
		        
		        while(!q.empty() && freq[q.front()-'a']>1)
		        {
		            q.pop();
		        }
		        if(q.empty())
		        ans.push_back('#');
		        else
		        ans.push_back(q.front());
		    }
		    return ans;
		    
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
