#pragma once

#include <iostream>

using namespace std;

#define SIZE 5

#pragma region 선형 큐
// 배열의 공간에 들어간 데이터가 고정되어 데이터를
// 빼내더라도 초기화하지 않으며 원래 데이터가
// 있던 배열의 자리에 더 이상 다른 값이 들어갈 수 없는 Queue입니다.
#pragma endregion

template <typename T>
class LinearQueue
{
private:
	int front;
	int rear;
	int size;

	T buffer[SIZE];
public :
	LinearQueue()
	{
		front = 0;
		rear = 0;
		size = 0;
	}

	void EnQueue(T data)
	{
		if (IsFull() == true)
		{
			cout << "Queue is Full" << endl;
		}
		else
		{
			buffer[rear++] = data;

			size++;
		}
	}

	void Dequeue()
	{
		if (Empty() == true)
		{
			cout << "Queue is Empty" << endl;
		}
		else
		{
			buffer[front++] = NULL;

			size--;
		}
	}

	bool IsFull()
	{
		if (SIZE <= rear)
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

	int & Size()
	{
		return size;
	}

	T & Front()
	{
		if (Empty() == true)
		{
			exit(1);
		}
		else
		{
			return buffer[front];
		}
	}

	T& Back()
	{
		if (Empty() == true)
		{
			exit(1);
		}
		else
		{
			return buffer[rear - 1];
		}
	}
};