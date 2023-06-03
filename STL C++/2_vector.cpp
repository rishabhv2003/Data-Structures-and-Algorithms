/* Vector is a dynamic array which means the vector can double its
size when there is a need to add more elements 0 */

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // declaration of vector array.
    vector<int> v;
    // in this way we can declare array and all the elements will be intialized to 1.

    // declare vector with elements
    vector<int> a = {2, 3, 3, 4, 5};

    // to copy array "a" into another array. here all elements of a will be copied to newarr
    vector<int> newarr(a);

    for (int i : newarr)
    {
        cout << i << " ";
    }

    //  this command is used to check the capacity of the capacity =
    cout << "capacity = " << v.capacity() << endl;

    // inserting element into the array
    v.push_back(1);
    cout << "capacity = " << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity = " << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity = " << v.capacity() << endl;

    // size command is used to check the number of elements
    cout << "size = " << v.size() << endl;

    // front ans back command for array
    cout << "front = " << v.front() << endl;
    cout << "back = " << v.back() << endl;

    // to remove an element from array. it removes the last element
    v.pop_back();

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // command to clear the array
    cout << "size before clear = " << v.size() << endl;
    cout << "capacity before clear = " << v.capacity() << endl;
    v.clear(); // command
    cout << "size after clear = " << v.size() << endl;
    cout << "capacity after clear = " << v.capacity() << endl;
    // after running the above command we say that only
    // size change after clear command capacity reamins same.

    return 0;
}