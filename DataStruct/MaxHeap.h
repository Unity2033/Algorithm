#pragma once
#include <iostream>

using namespace std;

#define SIZE 8

template<typename T>
class MaxHeap
{
private:
	T heapBuffer[SIZE];
	int index;

public:
	MaxHeap()
	{
		for (int i = 0; i < SIZE; i++)
		{
			heapBuffer[i] = NULL;
		}

		index = 0;
	}

	void Insert(T data)
	{
		if (IsFull())
		{
			cout << "MaxHeap is Full" << endl;
			return;
		}

		heapBuffer[++index] = data;

		int child = index;
		int parent = index / 2;

		while (child > 1)
		{
			// 자식 노드와 부모 노드의 데이터를 비교합니다.
			if (heapBuffer[parent] < heapBuffer[child])
			{
				swap(heapBuffer[parent], heapBuffer[child]);
			}

			child = parent;
			parent = child / 2;
		}
	}

	bool IsFull()
	{
		if (index == SIZE - 1)
			return true;
		else
			return false;
	}

	void Display()
	{
		for (const T & element : heapBuffer)
		{
			cout << element << " ";
	   }
	}
};