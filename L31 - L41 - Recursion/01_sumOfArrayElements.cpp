#include<iostream>
using namespace std;

int sum(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return arr[0];
    }

    // int ans = arr[0] + sum(arr+1, n-1);

    return arr[0] + sum(arr+1, n-1);
}


int main()
{
    int arr[] = {2,1,4,5,6,7,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = sum(arr,n);
    cout<<ans;
    return 0;
}