#pragma once
#include <iostream>

using namespace std;

template <typename T>
class SingleLinkedList
{
private:
    struct Node
    {
        T data;
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

    void PushFront(T data)
    {
        Node * newNode = new Node;
        newNode->data = data;

        if (head == nullptr && tail == nullptr)
        {
            newNode->next = nullptr;

            head = newNode;

            tail = newNode;
        }
        else
        {
            newNode->next = head;

            head = newNode;
        }

        size++;
    }

    void PushBack(T data)
    {
        Node * newNode = new Node;

        newNode->data = data;

        newNode->next = nullptr;

        if (head == nullptr && tail == nullptr)
        {
            head = newNode;

            tail = newNode;
        }
        else
        {
            tail->next = newNode;

            tail = newNode;
        }

        size++;
    }

    void PopFront()
    {
        if (head == nullptr && tail == nullptr)
        {
            cout << "List is Empty" << endl;
            return;
        }

        if (size == 1)
        {
            Node * deleteNode = head;

            head = nullptr;
            tail = nullptr;

            delete deleteNode;
        }
        else
        {
            Node* deleteNode = head;

            head = deleteNode->next;

            delete deleteNode;
        }

        size--;
    }

    void Display()
    {
        Node * currentNode = head;

        while (currentNode != nullptr)
        {
            cout << currentNode->data << endl;
            currentNode = currentNode->next;
        }
    }

    int Size()
    {
        return size;
    }

    ~SingleLinkedList()
    {
        while (size != 0)
        {
            PopFront();
        }
    }
};



