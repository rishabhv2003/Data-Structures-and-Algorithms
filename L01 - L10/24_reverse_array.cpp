#include<iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n-1;

    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
    
    
}

int main()
{
    int array[]= {5, 34, 3, 0, 6, 9, 98, 289, 98};

    reverse(array, 9);


    return 0;
}