#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        cout << "I am inside default Constructor" << endl;
        this->next = NULL;
    }

    Node(int data)
    {
        cout << "I am inside para-meterised Constructor" << endl;
        this->data = data;
        this->next = NULL;
    }
};
void printLL(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int getLength(Node *head)
{
    Node *temp = head;

    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
//   insertion at head(beginning)

void insertAtHead(Node *&head, int data)
{
    if (head == NULL)
    {
        // empty LL

        //  step1: create new node
        Node *newNode = new Node(data);
        //  step2: update head
        head = newNode;
    }
    else
    {

        //  create new node
        Node *newNode = new Node(data);
        // attach new node to head node
        newNode->next = head;

        //  update head
        head = newNode;
    }
}
int main()
{
    // creation of Node
    //  -->> Static Allocation
    Node a;

    //    -->> Dyanmically allocation
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    //  connect Node
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    //  linked list create ho chuka hai

    Node *head = first;

    printLL(head);

    insertAtHead(head, 500);
     printLL(head);
    cout << "Length of LL is: " << getLength(head) << endl;

    return 0;
}