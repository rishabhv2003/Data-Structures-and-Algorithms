#include <bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[], int low, int high, int key)
{
    if(low > high)
        return false;

    int mid = low + (high - low)/2;#include <.h>
    if(arr[mid]==key)
        return true;

    if(arr[mid]>key)
    {
        return binarySearch(arr,low,mid-1,key);
    }
    if(arr[mid]<key)
    {
        return binarySearch(arr,mid+1,high,key);
    }
}
int main()
{

    int arr[10] = {2, 3, 5, 7, 8, 12, 34, 43, 323, 400};
    int key;
    cin >> key;
    int low = 0, high = 9;
    bool ans = binarySearch(arr, low, high, key);

    if (ans)
        cout << "present";
    else
        cout << "not present";

    return 0;
}