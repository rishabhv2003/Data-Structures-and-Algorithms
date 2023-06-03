#include<iostream>
using namespace std;


void printArray(int arr[], int size)
{
    cout <<"the starting of printing the array";

    for(int i = 0; i<size ; i++)
    {
        cout<< arr[i]<< endl;
    }

    cout << "printing DONE";
}


int main() 
{ 
    int array[8];

    //To initialize the array with value'1'.
    fill_n(array, 8, 10);

    
    

    // printArray(array, 10);


    int sizeofArray = sizeof(array)/sizeof(int);

    cout << sizeofArray;



    return 0;
}