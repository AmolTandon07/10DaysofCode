class Solution {
public:
    int minimumSum(int num) {
        int arr[4];
        int r;
        int x=0;
        while(num!=0)
        {
            r=num%10;
            arr[x]=r;
            num=num/10;
            x++;
        }

        sort(arr, arr+4);
        int n1,n2;
        n1=arr[0]*10+arr[2];
        n2=arr[1]*10+arr[3];

        int sum=n1+n2;
        return sum;
    }
};
