#include<iostream>
using namespace std;

bool search (int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return 1;
        }
        
    }
    return 0;
}

int main()
{
    int array[]= {5, 34, 3, 0, 6, 9, 98, 289, 98};
    int n = 62;

    int ans = search(array, 9, n);

    if(ans)
    {
        cout << "the number is present";
    }
    else
    {
        cout << "the number is not present";
    }


    return 0;
}