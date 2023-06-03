#include<iostream>
using namespace std;


class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
    
};

Complex ::Complex(int x = 8, int y = 9) // ----> This is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
   
    // cout<<"Hello world";
}
int main(){
    // Implicit call
    Complex a(4);
    a.printNumber();

    // Explicit call
    Complex b = Complex(7);
    b.printNumber();

    return 0;
}
