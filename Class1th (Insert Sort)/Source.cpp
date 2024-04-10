#include <iostream>

using namespace std;

#define SIZE 5

int main()
{
#pragma region 거품 정렬 (Bubble Sort)
	// 서로 인접한 두 원소를 검사하여 정렬하는 알고리즘입니다.

	//	int buffer[SIZE] = { 13,8,14,1,16 };
	//	
	//	for (int i = 0; i < SIZE - 1; i++)
	//	{
	//		for (int j = 0; j < (SIZE - i) - 1; j++)
	//		{
	//			if (buffer[j] > buffer[j + 1])
	//			{
	//				std::swap(buffer[j], buffer[j + 1]);
	//			}
	//		}
	//	}
	//	
	//	for (const int & element : buffer)
	//	{
	//		cout << element << " ";
	//	}

	// 거품 정렬의 시간 복잡도는 O(n^2)입니다.

#pragma endregion

#pragma region 선택 정렬 (Selection Sort)
	// 주어진 리스트 중에 최소값을 찾아서 맨 앞에 위치한 값과 
	// 교체하는 방식으로 정렬하는 알고리즘입니다.

	//	int list[SIZE] = { 6,2,8,1,0 };
	//	
	//	for (int i = 0; i < SIZE; i++)
	//	{
	//		int min = list[i];
	//	
	//		int select = i;
	//	
	//		for (int j = i + 1; j < SIZE; j++)
	//		{
	//			if (min > list[j])
	//			{
	//				min = list[j];
	//				select = j;
	//			}
	//		}
	//	
	//		std::swap(list[i], list[select]);
	//	}
	//	
	//	for (const int& element : list)
	//	{
	//		cout << element << " ";
	//	}

	// 선택 정렬의 시간 복잡도는 O(n^2)입니다.
#pragma endregion

#pragma region 삽입 정렬 (Insert Sort)
	// data를 하나씩 확인하면서 이미 정렬된 부분과 비교하여
	// 자신의 위치를 찾아 삽입하는 방식으로 정렬하는 알고리즘입니다.

	//	int list[SIZE] = { 9,6,8,1,3 };
	//	
	//	int key = 0;
	//	int j = 0;
	//	
	//	for (int i = 1; i < SIZE; i++)
	//	{
	//		key = list[i];
	//	
	//		for (j = i - 1; j >= 0 && list[j] > key; j--)
	//		{
	//			list[j + 1] = list[j];
	//		}
	//	
	//		list[j + 1] = key;
	//	}
	//	
	//	for (const int& element : list)
	//	{
	//		cout << element << " ";
	//	}

	// 시간 복잡도는 O(n^2)입니다.



#pragma endregion


}

