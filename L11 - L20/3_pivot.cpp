#include<iostream>
using namespace std;

int getPivot (int arr[], int n)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<=e)
    {
        if(arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid  = s + (e-s)/2;
    }
// we can return s or e
    return s;
}


int main()
{
    int arr[5] = {8,4,2,6,7};
    int piv = getPivot(arr,5);

    cout<<piv<<endl;


    return 0;
}