#include <iostream>

using namespace std;

void HanoiTower(int n, char from, char temp, char to)
{
	if (n == 1)
	{
		cout << "[" << n << "]" << from << " -> " << to << endl;
	}
	else
	{
		HanoiTower(n - 1, from, to, temp);
		cout << "[" << n << "]" << from << " -> " << to << endl;
		HanoiTower(n - 1, temp, from, to);
	}
}

int main()
{
#pragma region 백트래킹 (Back Tracking)
	// 해를 찾아가는 도중에 지금의 경로가 해가 될 것 같지 않으면,
	// 더 이상 깊이 들어가지 않고, 이전 단계로 다시 돌아가는 알고리즘입니다.

	// 백트래킹의 유망성 판단
	// 해가 될 만한지 판단한 후에 유망하지 않다고 결정되면,
	// 그 노드의 이전 노드로 돌아가 다음 자식 노드로 이동합니다.

	// 해가 될 만한 가능성이 있으면 유망하다 (Promising)
	// 유망하지 않은 노드에 가지 않는 것     (pruning)

	HanoiTower(3, 'A', 'B', 'C');
#pragma endregion


	return 0;
}
