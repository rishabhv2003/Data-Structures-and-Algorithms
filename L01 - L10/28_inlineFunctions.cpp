#include<bits/stdc++.h>
using namespace std;

inline int sum(int a, int b){
    return a+b;
}

int main()
{

    cout<<"the sum of a and b is "<<sum(9,8)<<endl;
    // inline function replaces the sum.
    // The compilation speed of the program gets increased since the inline functions prevent function call overhead.
    return 0;
}