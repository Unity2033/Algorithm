#include <iostream>

using namespace std;

#pragma region 단일 연결 리스트


#pragma endregion



void PushFront(Node * target, int data)
{
    Node * newNode = new Node;
    newNode->data = data;

    newNode->next = target->next;

    target->next = newNode;
}

void Remove(Node * target)
{
    Node * deleteNode = target->next;

    target->next = deleteNode->next;

    delete deleteNode;
}


int main()
{
    Node * head = new Node;
    head->next = nullptr;

    PushFront(head, 10);
    PushFront(head, 20);

    Remove(head);

    Node * currentPtr = head->next;

    while (currentPtr != nullptr)
    {
        cout << currentPtr->data << endl;
        currentPtr = currentPtr->next;
    }

}

