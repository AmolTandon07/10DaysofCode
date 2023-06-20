class Solution {
public:
    int minPartitions(string n) {
       sort(n.begin(),n.end());
       char ch;
       ch=n[n.length()-1];
       int num;
       num=ch-48;
       return num; 
    }
};
