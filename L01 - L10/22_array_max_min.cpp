#include <iostream>
#include <limits.h>
using namespace std;

int getMin(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int getMax(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int array[8] = {5, 6, 7, 12, 34, 56, 34, 58};

    
    // printArray(array, 10);
    cout << "maximum value is "<<getMax(array,8)<< endl;
    cout << "minimum value is "<<getMin(array,8)<< endl;
    return 0;
}