#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * prev;
};

int main()
{
    Node * head = new Node;
    head->prev = NULL;

    Node * tail = new Node;
    tail->next = NULL;

    Node * node1 = new Node;
    node1->data = 1000;
    Node * node2 = new Node;
    node2->data = 2000;

    head->next = node1;

    node1->prev = head;
    node1->next = node2;

    node2->prev = node1;
    node2->next = tail;

    tail->prev = node2;

    Node * frontPtr = head->next;

    while (frontPtr != tail)
    {
        cout << frontPtr->data << endl;
        frontPtr = frontPtr->next;
    }

    Node* backPtr = tail->prev;

    while (backPtr != head)
    {
        cout << backPtr->data << endl;
        backPtr = backPtr->prev;
    }

  

    return 0;
}

