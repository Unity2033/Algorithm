#include <iostream>

using namespace std;

#define SIZE 10

int main()
{
#pragma region 브루트 포스(Brute Force)
	// 가능한 모든 경우의 수를 모두 탐색하면서
	// 결과를 도축하는 알고리즘입니다.

	int password[] = { 7,6,4 };

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			for (int k = 0; k < SIZE; k++)
			{
				if (password[0] == i && password[1] == j && password[2] == k)
				{
					cout << "해제" << endl;
					cout << "Password : " << i << " " << j << " " << k << " ";
					return 0;
				}
			}
		}
	}

#pragma endregion



	return 0;
}
