#include<iostream>
using namespace std;
int main()
{
    cout<<"using break:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"hello"<<" "<<i<<endl;
        break;
        cout<<"hi"<<endl;
    }
    cout<<"using continue:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"hello"<<" "<<i<<endl;
        continue;
    }

    return 0;
}