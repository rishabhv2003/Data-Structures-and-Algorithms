#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b){
    return a+b;
}

int sum(int a , int b, int c)
{
    return a+b+c;
}
int main()
{
    cout<<sum(3,4)<<endl;
    cout<<sum(3,4,6)<<endl;

    // The main advantage of function overloading is that it improves code readability and allows code reusability. The use of function overloading is to save memory space, consistency, and readability. It speeds up the execution of the program. Code maintenance also becomes easy.

    return 0;
}