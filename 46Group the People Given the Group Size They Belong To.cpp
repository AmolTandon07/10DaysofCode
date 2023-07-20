class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& v) {
        
        int n = v.size();
        map<int, vector<int>> mp;

        for(int i = 0; i<n; i++){
            mp[v[i]].push_back(i);
        }
        
        // ||| ||| |||
        // v  it.sc = 
        vector<vector<int>> res;
        for(auto it: mp){
            vector<int> t;
            int s = it.first;
            for(auto ij: it.second){ // keys 
                t.push_back(ij);
                if(t.size() == s){
                   res.push_back(t);
                   t.clear();
                }
            }
        }
        // unordered_map<int , vector<vector<int>> > mpC;
        // unordered_map<int ,int>mpI;

        // for(int i = 0 ;i < v.size();i++){
        //     mpC[v[i]].
        // }
        // vv v[0]
        // for(int i = 0 ;i< v.size();i++){
        //     cout<<i<<endl;
        //     mpC[v[i]][mpI[v[i]]].push_back(i);
        //     // 3 [[]]
        //     if(mpC[ v[i] ][mpI[v[i]]].size() == v[i]){
        //         mpI[v[i]]++;
        //     }
        // }
        // vector<vector<int>> res;
        // for(auto it:mpC){
        //     for(auto ij:it.second)
        //         res.push_back(ij);
        // }
        return res;
    }
};
