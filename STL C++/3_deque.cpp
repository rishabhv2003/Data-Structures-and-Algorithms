#include<iostream>
#include<deque>

using namespace std;
int main()
{
    deque<int> d = {2, 4, 6 , 9, 5, 1};
    cout<<"deque before operation"<<endl;
    for (int i : d )
    {
        cout<<i<< " ";
    }
    
    d.erase(d.begin(), d.end() - 2 );
    cout<<"deque after operation"<<endl;
    for (int i : d )
    {
        cout<<i<< " ";
    }

    return 0;
}