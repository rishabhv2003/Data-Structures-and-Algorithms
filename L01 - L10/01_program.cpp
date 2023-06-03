#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a = 5;
    int b = 3;

    char n[20];
    gets(n);
    puts(n);

    if (a > b)
    {
        cout << "a is greater than b"<< a<< b;
    }
    else if(a < b)
    {
        cout<< "b is greater than a";
    }
}