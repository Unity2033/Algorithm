#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node * next;
};

int main()
{
    Node * node = new Node;

    Node * node1 = new Node;
    node->next = node1;
    node1->data = 10;

    Node * node2 = new Node;
    node2->data = 20;

    node1->next = node2;

    node2->next = NULL;

    // 리스트 순회
    Node * currentNode = node->next;

    while (currentNode != NULL)
    {
        cout << currentNode->data << endl;
        currentNode = currentNode->next;
    }

    delete node;
    delete node1;
    delete node2;

    return 0;
}

