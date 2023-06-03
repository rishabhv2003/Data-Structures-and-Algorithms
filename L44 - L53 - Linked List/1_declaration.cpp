#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(node *&head, int d)
{
    // we have taken &head reference because we want changes in original linked list
    // new node creation
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
int main()
{
   
    node *obj = new node(10);
    node *head = obj;
    insertAtHead(head, 20);
    insertAtHead(head, 30);

    cout << "head" << endl;
    cout << head->data << endl;
    cout << head->next << endl;

    cout << "head ka next element" << endl;
    node *element = head->next;
    cout << &head->next->data << endl;
    cout << head->next->next << endl;

    cout << "obj" << endl;
    cout << &obj->data << endl;
    cout << obj->next << endl;

    return 0;
}