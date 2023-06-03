#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};
void insertNode(node * &tail, int element,int d)
{
    // assuming that the element is present in the list

    // empty list
    if(tail == NULL)
    {
        node *newnode = new node(d);
        tail = newnode;
        newnode -> next = newnode;
    }
    // non empty list
    else
    {
        node *curr = tail;
        while(curr -> data != element)
        {
            curr = curr -> next;
        }

        node *temp = new node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }
}
void print(node*&tail)
{
    node *temp = tail;
    // while(tail -> next != temp)
    // {
    //     cout << tail -> data << " ";
    //     tail = tail -> next;
    // }
    if(tail == NULL)
    {
        cout << "list is empty";
    }
    do
    {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while (tail!=temp);
    cout <<endl;
    
}

void deletion(node * &tail,int value)
{
    // empty list
    if(tail == NULL)
    {
       cout<<"list is empty";
    }
    else
    {
        // non empty
        node *prev = tail;
        node *curr = prev -> next;
        while(curr -> data != value)
        {
            prev =curr;
            curr = curr -> next;
        }
        prev  -> next = curr -> next;
        // 1 node linked list
        if(curr == prev)
        {
            tail = NULL;
        }
        // >= 2 node linked list
        if(tail == curr)
        {
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}
int main()
{
    node * tail = NULL;
    insertNode(tail,5,3);
    insertNode(tail,3,2);
    insertNode(tail,2,7);
    insertNode(tail,7,9);
    insertNode(tail,9,10);

    print(tail);
    deletion(tail,3);
    print(tail);
    return 0;
}