#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;

    // constructor
    node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~node()
    {
        int val = this -> data;
        if(next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for "<<val<<endl;
    }
};

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getLength(node *head)
{
    int len = 0;
    node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(node *&tail, node *&head, int d)
{
    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(node *&tail, node *&head, int d)
{
    if (tail == NULL)
    {
        node *temp = new node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        node *temp = new node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtPosition(node *&tail, node *&head, int position, int d)
{

    if (position == 1)
    {
        insertAtHead(tail,head,d);
        return;
    }
    node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail,head, d);
        return;
    }

    // creating a node for d
    node *nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteByPosition(int position, node *&head)
{
    // deleting first node
    if (position == 1)
    {
        node *temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        // deleting middle or last node
        node *curr = head;
        node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next =NULL;
        
    }
}
int main()
{

    // node *node1 = new node(10);
    // node *head = node1;
    // node *head = node1;
    node *head = NULL;
    node *tail = NULL;
    // node *tail = node1;
    insertAtHead(tail, head, 12);
    insertAtTail(tail, head, 18);
    insertAtTail(tail, head, 24);
    insertAtTail(tail, head, 23);

    insertAtPosition(tail, head, 2, 101);
    print(head);
    // cout << getLength(head);
    cout << head->data;
    cout << endl;
    cout << tail->data;
    return 0;
}