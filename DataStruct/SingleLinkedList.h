#pragma once
#include <iostream>

using namespace std;

class SingleLinkedList
{
private:
    struct Node
    {
        int data;
        Node* next;
    };

    Node * head;
    Node * tail;

    int size;

public:
    SingleLinkedList()
    {
        head = nullptr;
        tail = nullptr;

        size = 0;
    }

    void PushFront(int data)
    {
        Node * newNode = new Node;
        newNode->data = data;

        if (head == nullptr && tail == nullptr)
        {
            head = newNode;

            tail = newNode;
        }
        else
        {
            newNode->next = head;

            head = newNode;
        }
    }


};

