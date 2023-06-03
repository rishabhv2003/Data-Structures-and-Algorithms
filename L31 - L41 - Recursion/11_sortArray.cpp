#include<bits/stdc++.h>
using namespace std;

void sort(int a[],int n)
{
    if(n<=1)
    {
        return;
    }
    for(int i = 0; i<n;i++)
    {
        if(i==0)
        {
            continue;
        }
        else if(a[i] < a[i-1]){
            swap(a[i],a[i-1]);
        }
    }
    sort(a,n-1);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
