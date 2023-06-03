#include <bits/stdc++.h>
using namespace std;

void reverse(string& arr, int i,int j)
{
    if (i>j)
    {
        return;
    }

    swap(arr[i],arr[j]);
    i++;
    j--;

    reverse(arr,i,j);
}
int main()
{
    string arr = "abcde";

    reverse(arr,0,4);
    cout<<arr;
    return 0;
}