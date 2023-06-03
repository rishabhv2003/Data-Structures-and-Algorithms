#include<bits/stdc++.h>
using namespace std;

struct emp{
    int data;
    int age;
};
union emp1{
    int data;
    double age;
};

enum meal{
    great,
    handshake
};
int main()
{
    emp e1;
    e1.age = 19;
    e1.data = 2342;

    cout<<e1.age<<endl;
    cout<<e1.data<<endl;

    
    cout<<sizeof(emp)<<endl;
    cout<<sizeof(emp1)<<endl;

    meal m1 = great;
    meal m2= handshake;
    cout<<m1<<endl;
    cout<<m2<<endl;
    return 0;
}