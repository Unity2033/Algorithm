#pragma once
#include <iostream>

using namespace std;

#define SIZE 4

#pragma region 원형 큐
// 물리적으로는 선형 구조를 가지고 있으며,
// 큐의 시작점과 끝점을 연결한 큐입니다.
#pragma endregion


template <typename T>
class CircleQueue
{
private:
	int rear;
	int front;

	T buffer[SIZE];

public:
	CircleQueue()
	{
		rear = SIZE - 1;
		front = SIZE - 1;

		for (int i = 0; i < SIZE; i++)
		{
			buffer[i] = NULL;
		}
	}

    void EnQueue(T data)
	{
		if (IsFull() == true)
		{
			cout << "Queue is Full" << endl;
		}
		else
		{	
			rear = (rear + 1) % SIZE;
			buffer[rear] = data;
		}
	}

	void DeQueue()
	{
		if (Empty() == true)
		{
			cout << "Queue is Empty" << endl;
		}
		else
		{
			front = (front + 1) % SIZE;
			buffer[front] = NULL;
		}
	}

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

	T & Front()
	{
		return buffer[(front + 1) % SIZE];
    }

	T & Back()
	{
		return buffer[rear];
	}

	~CircleQueue() {}
};