#include<iostream>
using namespace std;
int main()
{

    int sum = 0;
    int i = 1;

    int n;
    cin>>n;

    while (i <= n)
    {
        if(i%2==0)
        {
            sum = i + sum;
        }
        i++;
    }
    
    cout << sum;


    return 0;
}