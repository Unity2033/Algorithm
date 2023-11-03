
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

	T& Delete()
	{
		// 1. Heap이 비어있다면 프로그램을 종료합니다.
		if (index <= 0)
		{
			cout << "Heap is Empty" << endl;
			exit(1);
		}

		// 2. 임신 변수 <- 가장 큰 값을 보관하는 역할
		T result = heapBuffer[1];

		// 3. index로 가리키는 배열의 값을 첫 번째 원소에 넣어줍니다.
		heapBuffer[1] = heapBuffer[index];

		// 4. index로 가리키는 배열의 값을 초기화합니다.
		heapBuffer[index] = NULL;

		// 5. index의 값을 감소시킵니다.
		index--;

		int parent = 1;

		while (parent * 2 <= index)
		{
			int child = parent * 2;

			// 오른쪽 자식의 노드가 클 때
			if (heapBuffer[child] < heapBuffer[child + 1])
			{
				child++;
			}

			// 부모 노드의 Key 값이 자식 노드의 Key 값보다 크다면 반복을 종료합니다.
			if (heapBuffer[child] < heapBuffer[parent])
			{
				break;
			}

			swap(heapBuffer[parent], heapBuffer[child]);
			parent = child;
		}

		return result;
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
		for (const T& element : heapBuffer)
		{
			cout << element << " ";
		}
	}
};
int main()
{
	return 0;
}

