#pragma once
#include <iostream>

using namespace std;

#define COUNT_SIZE 5
#define	BUFFER_SIZE 10

int main()
{
#pragma region 계수 정렬
	// 데이터의 값을 직접 비교하지 않고, 단순하게 각 숫자가
	// 몇 개 있는지 갯수를 세어 저장한 다음 정렬하는 알고리즘입니다.

	// 시간 복잡도 : O(n + k)

	int buffer[BUFFER_SIZE] = { 1,5,3,4,4,3,1,2,5,1 };

	int countBuffer[COUNT_SIZE] = { 0, };

	for (int i = 0; i < BUFFER_SIZE; i++)
	{
		// [0] [1] [2] [3] [4]
		//  1			   1
		countBuffer[buffer[i] - 1] += 1;
	}

	for (int i = 0; i < COUNT_SIZE; i++)
	{
		cout << countBuffer[i] << endl;
	}


#pragma endregion

}

