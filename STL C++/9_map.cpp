#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[1] = "alpha";
    m[13] = "charlie";
    m[2] = "beta";
    for(auto i:m)
    {
        cout<<i.first<<endl;
    }
    auto it = m.find(5);
    for(auto i = it ; i!=m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }
    return 0;
}