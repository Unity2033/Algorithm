#include <iostream>
#include <limits.h>

#define SIZE 5
#define INFINITY 10000000

using namespace std;

class Graph
{
private:
	int weight[SIZE][SIZE] =
	{
		{0       ,7,4       ,6       ,1 }   ,
		{INFINITY,0,INFINITY,INFINITY,INFINITY },
		{INFINITY,2,0,5              ,INFINITY }   ,
		{INFINITY,3,INFINITY,0       ,INFINITY }   ,
		{INFINITY,INFINITY,    INFINITY,  1,0 }   ,
	};

	bool visited[SIZE];
	int distance[SIZE];

public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = 0;
		}
	}

	// 최소 비용 노드를 탐색하는 함수
	int SmallNode()
	{
		int min = INFINITY;
		int minPosition = 0;

		for (int i = 0; i < SIZE; i++)
		{
			if (distance[i] < min && visited[i] == false)
			{
				min = distance[i];
				minPosition = i;
			}
		}

		return minPosition;
	}

	void Dijkstra(int start)
	{
		for (int i = 0; i < SIZE; i++)
		{
			distance[i] = weight[start][i];
		}

		visited[start] = true;

		for (int i = 0; i < SIZE - 1; i++)
		{
			int minNode = SmallNode(); // 최소 비용 노드 탐색

			visited[minNode] = true;

			for (int j = 0; j < SIZE; j++)
			{
				// 방문하지 않은 노드 중에서 시작점이 최소 비용 노드를 
				// 경유하는게 더 가까우면 값을 갱신합니다.
				if (visited[j] == false)
				{
					if (distance[minNode] + weight[minNode][j] < distance[j])
					{
						distance[j] = distance[minNode] + weight[minNode][j];
					}
				}
			}

		}
	}

	void Distance()
	{
		for (int i = 0; i < SIZE; i++)
		{
			cout << distance[i] << " ";
		}
	}
};

int main()
{
#pragma region 다익스트라 알고리즘
	// 시작점으로부터 모든 노드까지의 최소 거리를 구해주는
	// 알고리즘입니다.

	// 1. distance 배열의 weight[시작점 노드]의 값들로
	//    초기화시켜줍니다.

	// 2. 시작점을 방문 처리합니다.

	// 3. distance 배열에서 최소 비용 노드를 찾고 방문 처리합니다.
	//    단, 이미 방문한 노드는 제외합니다.

	// 4. 최소 비용 노드를 거쳐갈지 고려해서 distance 배열을 갱신합니다.
	//    단, 이미 방문한 노드는 제외합니다.

	// 5. 모든 노드를 방문할 때까지 3번 ~ 4번을 반복합니다.

	// 방문하지 않은 노드 중에서 가장 작은 distance를 가진 노드를
	// 방문하고, 그 노드와 연결된 다른 노드까지의 거리를 계산합니다.

	Graph graph;

	graph.Dijkstra(0);

	graph.Distance();

#pragma endregion								  



	return 0;
}
