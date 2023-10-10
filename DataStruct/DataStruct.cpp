#include <iostream>

using namespace std;

#pragma region 단일 연결 리스트

// 1. 단일 연결 리스트 노드 제작

struct Node
{
    int data;
    Node * next;
};
#pragma endregion

void PushFront(Node * target, int data)
{
    Node * newNode = new Node;
    newNode->data = data;

    newNode->next = target->next;

    target->next = newNode;
}

int main()
{
    Node * head = new Node;
    head->next = nullptr;

    PushFront(head, 10);
    PushFront(head, 20);

    Node* currentPtr = head->next;

    while (currentPtr != nullptr)
    {
        cout << currentPtr->data << endl;
        currentPtr = currentPtr->next;
    }

}

