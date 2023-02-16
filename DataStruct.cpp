#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
};

// 추가 함수
void Insert(Node * target, int data)
{
    Node * newNode = new Node;
    newNode->data = data;

    newNode->prev = target;
    newNode->next = target->next;

    newNode->next->prev = newNode;
    target->next = newNode;
}

// 삭제 함수
void Remove(Node* target)
{

}

// 앞에서 출력하는 함수
void FrontCircuit(Node* target)
{

}

// 뒤에서 출력하는 함수
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