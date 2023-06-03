#include<iostream> 
using namespace std;
bool linearSearch(int arr[], int n, int x)
{
    if(arr[0]==x)
    {
        return true;
    }
    if(n==0)
    {
        return false;
    }

    linearSearch(arr+1,n-1,x);
}
int main()
{

    int arr[] = {2, 1, 4, 5, 6, 7, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 3;
    bool ans = linearSearch(arr, n, x);
    if (ans)
        cout << "present";
    else
        cout << "not present";
    return 0;
}