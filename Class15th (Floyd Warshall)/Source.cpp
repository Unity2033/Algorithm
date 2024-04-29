#include <iostream>

#define SIZE 4
#define INFINITY 1000000

using namespace std;

class Graph
{
private:
	int weight[SIZE][SIZE] =
	{
		{ 0, 5,    INFINITY, 8},
		{ 7, 0,           9, INFINITY},
		{ 2,       INFINITY, 0, 4},
		{ INFINITY,INFINITY, 3, 0},
	};

public:
	void FloydWarshall()
	{
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				for (int k = 0; k < SIZE; k++)
				{
					if (weight[j][i] + weight[i][k] < weight[j][k])
					{
						weight[j][k] = weight[j][i] + weight[i][k];
					}
				}
			}
		}
	}

	void Show()
	{
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				cout << weight[i][j] << " ";
			}

			cout << endl;
		}
	}
};

int main()
{
#pragma region 플로이드 워셜(Floyd Warshall)
	// 모든 지점에서 다른 모든 지점까지의 최단 경로를
	// 모두 구해야 하는 경우 사용하는 알고리즘입니다.

	Graph graph;

	graph.FloydWarshall();
	graph.Show();


	// 시간 복잡도 O(n^3)

#pragma endregion


	return 0;
}
