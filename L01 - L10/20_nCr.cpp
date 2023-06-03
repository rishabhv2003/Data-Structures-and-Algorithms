#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);

    int denom = factorial(r) * factorial(n - r);

    int ans = num / denom;

    return ans;
}
int main()
{
    int n, r;

    cout << "write the value of N and R : ";
    cin >> n >> r;

    cout << "the result of " << n << "C" << r << " is : ";

    cout << nCr(n, r);

    return 0;
}