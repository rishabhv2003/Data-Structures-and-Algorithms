#include<bits/stdc++.h>
using namespace std;

void printNto1(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    printNto1(n-1);
}
void print1toN(int n)
{
    if(n==0)
    {
        return;
    }
    print1toN(n-1);
    cout<<n<<" ";
}
int main()
{
    int n ;
    cin>>n;
    print1toN(n);
    cout<<endl;
    printNto1(n);
    return 0;
}