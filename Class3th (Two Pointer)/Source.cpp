#include <iostream>

#define SIZE 6

using namespace std;

int main()
{
#pragma region 투 포인터
	// 두 개의 포인터를 두고 값들을 비교하여
	// 문제를 해결하는 알고리즘입니다.

	//	int count = 0;
	//	int sum = 0;
	//	
	//	int start = 0;
	//	int end = 0;
	//	
	//	int M = 5;
	//	
	//	int list[SIZE] = { 2, 3, 1, 4, 2, 5 };
	//	
	//	while (start <= end)
	//	{
	//		if (sum >= M)
	//		{
	//			sum -= list[start++];
	//		}
	//		else if (end >= SIZE)
	//		{
	//			break;
	//		}
	//		else
	//		{
	//			sum += list[end++];
	//		}
	//	
	//		if (sum == M)
	//		{
	//			count++;
	//		}
	//	}
	//	
	//	cout << "count의 값 : " << count << endl;

	// 시간 복잡도 : O(N)

#pragma endregion

#pragma region 최소 공배수

	//	int x = 0;
	//	int y = 0;
	//	
	//	int count = 1;
	//	
	//	cin >> x >> y;
	//	
	//	for (int i = 2; i <= y; i++)
	//	{
	//		if (x % i == 0 && y % i == 0)
	//		{
	//			count *= i;
	//			x /= i;
	//			y /= i;
	//	
	//			i--;
	//		}
	//	}
	//	
	//	cout << "최소 공배수 : " << count * x * y << endl;

#pragma endregion

	return 0;
}

