#include <iostream>
#include "CircleQueue.h"

using namespace std;

int main()
{
#pragma region ���� ť
	// ���������δ� ���� ������ ������ ������,
	// ť�� �������� ������ ������ ť�Դϴ�.

	CircleQueue<int> circleQueue;

	circleQueue.EnQueue(100);
	circleQueue.EnQueue(200);
	circleQueue.EnQueue(300);

	cout << circleQueue.Front() << endl;
	cout << circleQueue.Back() << endl;

	circleQueue.DeQueue();
	circleQueue.DeQueue();
	circleQueue.DeQueue();


#pragma endregion



}

