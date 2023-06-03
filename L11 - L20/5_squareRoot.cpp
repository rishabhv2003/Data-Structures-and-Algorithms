#include <bits/stdc++.h>
using namespace std;

int squareRoot(int n)
{
    int low = 0;
    int high = n;
    int mid = n / 2;

    while (low <= high)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        if (mid * mid < n)
        {
            if ((mid + 1) * (mid + 1) > n)
            {
                return mid;
            }
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        mid = low + (high - low) / 2;
    }
}
double morePrecise(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int tempSol = squareRoot(n);
    cout<< morePrecise(n,3,tempSol);

    return 0;
}