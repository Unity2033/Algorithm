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

    Node* head;
    Node* tail;

public:


};
