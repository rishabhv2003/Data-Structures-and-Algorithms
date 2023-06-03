#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;

    s.insert(5);
    s.insert(7);
    s.insert(2);
    s.insert(-1);
    s.insert(4);
    s.insert(2);

    for (auto i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    s.erase(s.begin());

    for (int i : s)
    {
        cout<<i<<" ";
    }

    set<int>::iterator it = s.begin();
    it++;
    cout<< endl;
    s.erase(it);
    for (int i : s)
    {
        cout<<i<<" ";
    }
    
    cout<<endl;
    // it check whether 5 is present or not
    // cout<< s.count(5);

    cout<<"value present in itr or not = " << s.count(6) ;

    set<int>::iterator itr = s.find(6);

    for (auto it = itr; it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
} 