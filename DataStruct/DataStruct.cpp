#include <iostream>

using namespace std;

int main()
{
#pragma region 삽입 정렬
	// 두 번째 자료부터 시작하여 그 앞(왼쪽의)
	// 자료들과 비교하여 삽입할 위치를 지정한 후
	// 자료를 뒤로 옮기고 지정한 자리에 자료를 삽입하여
	// 정렬하는 알고리즘입니다.

	// 시간 복잡도 : O(n^2)

	/*int insertBuffer[] = { 9,1,5,3,2 };

	int key = 0;

	int j = 0;

	int size = sizeof(insertBuffer) / sizeof(int);

	for (int i = 1; i < size; i++)
	{
		key = insertBuffer[i];

		for (j = i - 1; j >= 0 && insertBuffer[j] > key; j--)
		{
			insertBuffer[j + 1] = insertBuffer[j];
		}

		insertBuffer[j + 1] = key;
	}

	for (const int & element : insertBuffer)
	{
		cout << element << endl;
	}*/

#pragma endregion

#pragma region 시간 복잡도
	// 컴퓨터 프로그램의 입력 값과 연산 수행 시간의
	// 상관관계를 나타내는 척도입니다.

	// Big-O 표기법
	// 입력값의 변화에 따라 연산을 수행할 때,
	// 연산 횟수에 비해 시간이 얼마만큼 걸리는 지 나타내는 척도입니다.

	// 최악의 경우를 고려하므로, 프로그램이 실행되는
	// 과정에서 소요되는 최악의 시간까지 고려할 수 있기 때문입니다.

	 // O(1) 상수 시간 복잡도
	 // 입력값이 증가하더라도 시간이 늘어나지 않는 시간 복잡도입니다.

	 // ex) 배열의 인덱스 접근
	 // int buffer[10]
	 // cout << buffer[5];

	 // O(n) 선형 시간 복잡도
	 // 입력값이 증가함에 따라 시간 또한 같은 비율로 
	 // 증가하는 시간 복잡도입니다.

	 // 입력 1
	 // 시간 -> 1초

	 // 입력 100
	 // 시간 -> 100초

	 // for(int i = 0; i < n; i++)
	 // {
	 // 	   content...
	 // }
	 
	 // O(log n) 로그 시간 복잡도
	 // 입력 데이터의 크기가 커질수록 처리 시간이 로그(log)만큼
	 // 짧아지는 시간 복잡도

#pragma endregion

}

