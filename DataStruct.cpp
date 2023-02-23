#include <iostream>
#define SIZE 4

using namespace std;

template <class T>
class Stack
{
private :
    int top = -1;
    T buffer[SIZE] = { 0, };

public:

    bool IsFull()
    {
        if (SIZE - 1 == top)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool Empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void Push(int data)
    {
        if (IsFull() == true)
        {
            cout << "Stack is Full" << endl;
        }
        else
        {
            buffer[++top] = data;
        }
    }

    T Pop()
    {
        if (Empty() == true)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            return buffer[top--];
        }
    }
};


int main()
{
    Stack<int> stack;

    stack.Push(10);
    stack.Push(20);
    stack.Push(30);
    stack.Push(40);
    
    while (!stack.Empty())
    {
        cout << stack.Pop() << endl;
    }

    stack.Pop();

    return 0;
}