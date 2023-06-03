#include<iostream>
using namespace std;
int main()
{
    int n, counter = 0;
    cin >> n;

    int i = 2;

    while(i<n/2){
        if(n%i==0)
        {
            counter++;
        }
        i++;
    }


    if(n==0)
    {
        cout<<"not prime";
    }
    else if(counter<1)
    {
        cout<<"the number "<<n<<" is prime";
    }
    else{
        cout<<"not prime";
    }


    return 0;
}