#define SIZE 4 
#include <iostream>

using namespace std;

class CircleQueue
{
private :
    int front = SIZE - 1;
    int rear = SIZE - 1;
    int buffer[SIZE] = { 0, };
public:
    bool IsFull()
    {
        if (front == (rear + 1) % SIZE)
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
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void Enqueue(int data)
    {
        if (IsFull() == true)
        {
            cout << "CircleQueue is Full" << endl;
        }
        else
        {
            rear = (rear + 1) % SIZE;
            buffer[rear] = data;
        }
    }

    int Dequeue()
    {
        if (Empty() == true)
        {
            cout << "CircleQueue is Empty" << endl;
        }
        else
        {
            front = (front + 1) % SIZE;
            int temp = buffer[front];

            buffer[front] = 0;
            return temp;
        }
    }
    
};

int main()
{
    CircleQueue circleQueue;
    circleQueue.Enqueue(10);
    circleQueue.Enqueue(20);
    circleQueue.Enqueue(30);

    while (!circleQueue.Empty())
    {
        cout << circleQueue.Dequeue() << endl;
    }

    circleQueue.Dequeue();

    return 0;
}