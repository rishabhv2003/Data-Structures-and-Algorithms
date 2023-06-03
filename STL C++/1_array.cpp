#include<iostream>
#include<array>


using namespace std;
int main()
{
    
    array<int,4> a = {1, 2, 3, 4};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout <<a[i]<< endl;
    }
    
    // to check the element at particular index.
    cout << "element at 3rd index " << a.at(3)<< endl;

    // to check whether the array is empty or not. it return a bool
    cout << "empty or not " << a.empty()<< endl;

    //to get front or back element of the array
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;


    return 0;
}