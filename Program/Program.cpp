#include <iostream>

using namespace std;

#define SIZE 8

void BinarySearch(int list[], int key)
{
	int left = 0;
	int right = SIZE - 1;

	while (left <= right)
	{
		// 1. 배열의 가운데 요소의 인덱스를 pivot으로 설정합니다.
		int pivot = (left + right) / 2;

		// 2. [pivot]의 값이 찾고자 하는 요소가 같다면 검색을 종료합니다.
		if (list[pivot] == key)
		{
				cout << "Key Found : " << list[pivot] << endl;
				return;
		}
		else if (list[pivot] > key) // 3. [pivot]의 값이 찾는 값보다 크다면 left ~ pivot 사이의 값을 검색합니다.
		{
			right = pivot - 1;
		}
		else // 4. [pivot]d의 값이 찾는 값보다 작다면 pivot ~ right 사이의 값을 검색합니다.
		{
			left = pivot + 1;
		}
	}

	cout << "Key Not Found" << endl;
}

int main()
{
#pragma region 이진 탐색
	// 오름차순으로 정렬된 리스트에서 특정한 값의 위치를 찾는 알고리즘입니다.

	// int list[SIZE] = { 5,6,11,13,27,55,66,99 };

	// BinarySearch(list, 99);

#pragma endregion

#pragma region 단일 책임 원칙
	// 하나의 클래스는 하나의 책임만을 가지고 있어야 합니다.
    // 하나의 클래스가 여러 책임을 가지고 있다면, 클래스를 분리해야 합니다.
#pragma endregion

#pragma region 개방 폐쇄 원칙
	// 클래스는 확장에 대해서는 열려 있어야 하지만, 수정에 대해서는 닫혀 있어야 합니다.

#pragma endregion

#pragma region 리소코프 치환 원칙
	// 하위 클래스는 상위 클래스에서 가능한 행위를 수행할 수 있어야 하며,
	// 하위 클래스는 상위 클래스의 행위를 변경하지 않고 확장할 수 있어야 합니다.
#pragma endregion





	return 0;
}

