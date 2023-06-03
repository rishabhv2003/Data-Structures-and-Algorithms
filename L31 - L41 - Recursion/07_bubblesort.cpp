#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n)
{
    if(n<0)
    {
        return;
    }
    for(int i = 0;i<n;i++)
    {
        if(arr[i-1]>arr[i] && i>0)
        {
            swap(arr[i-1],arr[i]);
        }
    }
    bubble_sort(arr,n-1);

}
int main()
{

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}