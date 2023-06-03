#include<iostream>
using namespace std;
int main()
{

    int a, b;

    cout << "Enter the value of a : ";
    cin >> a;

    cout << "Enter the value of b : ";
    cin >> b;

    char op;
    cout << "Enter the Operation you want to perform : ";
    cin >> op;
    switch (op)
    {
    case '+': cout << a+b;  
        break;

    case '-': cout << a-b;
        break;
    
    case '*': cout << a*b;
        break;
    
    case '/': cout <<a/b;
        break;
    default: cout << "pls enter a valid operation !!";
        break;
    }


    return 0;
}