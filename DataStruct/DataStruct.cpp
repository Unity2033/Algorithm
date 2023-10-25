#include <iostream>
#include "CircleQueue.h"

using namespace std;

int main()
{
#pragma region 원형 큐
	// 물리적으로는 선형 구조를 가지고 있으며,
	// 큐의 시작점과 끝점을 연결한 큐입니다.

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

