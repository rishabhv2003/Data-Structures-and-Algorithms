#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(12);
    v.push_back(9);
    v.push_back(15);

    cout<<"finding 6 -> "<<binary_search(v.begin(),v.end(),6);
    cout<<"lower bound -> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
   
    string a = "abcd";
    reverse(a.begin(), a.end());
    cout<<a;
    
    sort(v.begin(),v.end());

    for(int i : v)
    {
        cout<<i<<" ";
    }
    return 0;
}