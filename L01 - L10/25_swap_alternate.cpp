#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arry[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arry[i];
    }

    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arry[i], arry[i + 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << " ";
    }

    return 0;
}