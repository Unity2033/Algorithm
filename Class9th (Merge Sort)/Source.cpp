#include <iostream>

using namespace std;

#define SIZE 8

int sorted[SIZE];

void Merge(int list[], int start, int end)
{
	int middle = (start + end) / 2;
	int left = start;
	int right = middle + 1;
	int count = start;

	while (left <= middle && right <= end)
	{
		if (list[left] < list[right])
		{
			sorted[count++] = list[left++];
		}
		else
		{
			sorted[count++] = list[right++];
		}
	}

	if (left > middle)
	{
		while (right <= end)
		{
			sorted[count++] = list[right++];
		}
	}

	if (right > end)
	{
		while (left <= middle)
		{
			sorted[count++] = list[left++];
		}
	}

	for (int i = 0; i <= end; i++)
	{
		list[i] = sorted[i];
	}
}

void MergeSort(int list[], int start, int end)
{
	if (start < end)
	{
		int middle = (start + end) / 2;

		MergeSort(list, start, middle);
		MergeSort(list, middle + 1, end);
		Merge(list, start, end);
	}
}

int main()
{
#pragma region 합병 정렬
	// 하나의 리스트를 두 개의 균등한 크기로 분할하고 분할된
	// 부분 리스트를 정렬한 다음, 두 개의 정렬된 부분 리스트를
	// 합하여 전체가 정렬된 리스트가 되게 하는 방법입니다.

	// 합병 정렬은 분할 정복 알고리즘의 하나로, 다음과 같은 단계로 이루어집니다.

	// 1. 리스트의 길이가 0 또는 1이면 이미 정렬된 것으로 본다.

	// 2. 그렇지 않은 경우에는

	// 2-1. 정렬되지 않은 리스트를 절반으로 잘라 비슷한 크기의 두 부분 리스트로 나눈다.

	// 2-2. 각 부분 리스트를 재귀적으로 합병 정렬을 이용해 정렬한다.

	// 2-3. 두 부분 리스트를 다시 하나의 정렬된 리스트로 합병한다. 

	int list[SIZE] = { 3,5,2,7,4,1,8,6 };

	MergeSort(list, 0, SIZE - 1);

	for (const int& element : list)
	{
		cout << element << " ";
	}

	// 시간 복잡도
	// 합병 정렬의 시간 복잡도는 O(n log n)입니다.
#pragma endregion


	return 0;
}