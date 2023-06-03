#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    // node constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insertAtHead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void inserAtTail(node *&head, int d)
{
    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
    }
    else
    {
        node *temp = new node(d);
        node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = temp;
    }
}
void insertAtPosition(node *&head, int pos, int d)
{
    int count = 1;
    if (pos == 1)
    {
        insertAtHead(head, d);
        return;
    }
    node *curr = head;
    while (count < pos - 1)
    {
        curr = curr->next;
        count++;
    }
    node *temp = new node(d);
    temp->next = curr->next;
    curr->next = temp;
}
void deleteByPosition(node *&head, int pos)
{
    if (pos == 1)
    {
        head = head->next;
    }
    else
    {
        node *curr = head;
        node *prev =NULL;
        int count = 1;
        while (count < pos)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next= NULL;
    }
}
int main()
{
    node *head = NULL;
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    inserAtTail(head, 10);
    inserAtTail(head, 0);
    insertAtPosition(head, 6, 100);
    inserAtTail(head, 99);
    deleteByPosition(head, 2);
    print(head);
    cout << endl;

    cout << endl;
    cout << "head : " << head->data;

    return 0;
}