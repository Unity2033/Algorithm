#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
};

// �߰� �Լ�
void Insert(Node * target, int data)
{
    Node * newNode = new Node;
    newNode->data = data;

    newNode->prev = target;
    newNode->next = target->next;

    newNode->next->prev = newNode;
    target->next = newNode;
}

// ���� �Լ�
void Remove(Node* target)
{

}

// �տ��� ����ϴ� �Լ�
void FrontCircuit(Node* target)
{

}

// �ڿ��� ����ϴ� �Լ�
void BackCircuit(Node* target)
{

}

Node * head;
Node * tail;

int a;

int main()
{
    cout << a << endl;

    head = new Node;
    tail = new Node;

    head->prev = NULL;
    tail->next = NULL;

    head->next = tail;
    tail->prev = head;

    Insert(head, 1000);

  
    return 0;
}