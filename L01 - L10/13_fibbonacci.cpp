#include <iostream>
using namespace std;
int main()
{
    int n, fib = 0;
    cin >> n;
    
    int a = 0 , b = 1;
    cout<<a<<" ";
    for (int i = 1; i < n; i++)
    {
        cout<<fib<<" ";
        fib = a + b;
        a = b;
        b = fib;
    }

    return 0;
}