#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b); // acceptable // parameters here are called formal parameters
int sum(int , int); // acceptable
int main()
{
    int n,m;
    cin>>n>>m;

    int sumss = sum(n,m);

    cout<<sumss;
    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}