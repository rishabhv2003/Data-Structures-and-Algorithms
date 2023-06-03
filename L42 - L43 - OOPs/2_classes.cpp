#include <bits/stdc++.h>
using namespace std;

class employee
{
private:
    int a, b, c;
public:
    void setData(int a, int b, int c);
    void getData()
    {
        cout<< "value of a = "<<a<<endl;
        cout<< "value of b = "<<b<<endl;
        cout<< "value of c = "<<c<<endl;
    }
};

void employee :: setData(int a, int b, int c){
    this->a = a;
    this->b = b;
    this->c = c;
}

int main()
{
    employee rishabh;
    rishabh.setData(2,3,4);
    rishabh.getData();

    return 0;
}