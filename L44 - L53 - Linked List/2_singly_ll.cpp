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
void insertAtHead(node *&head, int d)
{
    // we have taken &head reference because we want changes in original linked list
    // new node creation
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(node *&tail, int d)
{
    // creating a temp array which contains the inserting value
    node *temp = new node(d);
    tail->next = temp;
    tail = tail->next;
}
void insertAtPosition(node *&tail, node *&head, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
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
        insertAtTail(tail, d);
        return;
    }
    // creating a node for d
    node *nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void deleteByPosition(int position, node *&head)
{
    // deleting first node
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        // memory free start node
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
        prev->next = curr->next;
        curr -> next = NULL;
        delete curr;
    }
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    // created a new node
    node *node1 = new node(11);
    // head pointes to node1
    node *head = node1;
    node *tail = node1;
    insertAtTail(tail, 12);
    insertAtTail(tail, 13);
    insertAtPosition(tail, head, 1, 33);
    print(head);
    
    cout << endl;
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteByPosition(3,head);
    print(head);

    return 0;
}