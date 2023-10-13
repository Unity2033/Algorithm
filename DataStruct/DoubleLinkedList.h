#pragma once
#include <iostream>

using namespace std;

template <typename T>
class DoubleLinkedList
{
private:
    struct Node
    {
        T data;
        Node * next;
        Node * prev;
    };

    int size;
    Node* head;
    Node* tail;

public:
    
    DoubleLinkedList()
    {
        size = 0;
        head = nullptr;
        tail = nullptr;
    }

    void PushFront(T data)
    {
        Node * newNode = new Node;

        newNode->data = data;

        newNode->next = nullptr;

        newNode->prev = nullptr;

        if (head == nullptr)
        {                                   
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;

            head->prev = newNode;

            head = newNode;
        }

        size++;
    }

    void PushBack(T data)
    {
        Node * newNode = new Node;

        newNode->data = data;

        newNode->next = nullptr;

        newNode->prev = nullptr;

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->prev = tail;

            tail->next = newNode;
               
            tail = newNode;
        }

        size++;
    }

    void PopFront()
    {
        if (head == nullptr)
        {
            cout << "List is Empty" << endl;
            return;
        }
        else if (size == 1)
        {
            Node* deleteNode = head;

            head = nullptr;
            tail = nullptr;

            delete = deleteNode;
        }
        else
        {
            Node * deleteNode = head;

            head = head->next;

            head->prev = nullptr;

            delete deleteNode;
        }

        size--;
    }

    void PopBack()
    {
        if (head == nullptr)
        {
            cout << "List is Empty" << endl;
            return;
        }
        else if (size == 1)
        {
            Node* deleteNode = head;

            head = nullptr;
            tail = nullptr;

            delete = deleteNode;
        }
        else
        {
            Node * deleteNode = tail;

            tail = tail->prev;

            tail->next = nullptr;

            delete deleteNode;
        }

        size--;
    }

    void Insert(int position, T data)
    {
        if (position <= 1)
        {
            PushFront(data);
            return;
        }

        Node * currentNode = head;

        for (int i = 1; i < position; i++)
        {
            currentNode = currentNode->next;
        }

        Node * newNode = new Node;

        newNode->next = currentNode;
                        
        currentNode->prev->next = newNode;
        
        newNode->prev = currentNode->prev;

        currentNode->prev = newNode;

        size++;
    }


    ~DoubleLinkedList()
    {
        while (head != nullptr)
        {
            Node * deleteNode = head;
            head = head->next;

            delete deleteNode;
        }
    }

};
