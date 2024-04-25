#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define SIZE 8

class Graph
{
private:
	int inDegree[SIZE];
	std::vector<int> edge[SIZE];

public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			inDegree[i] = 0;
		}
	}

	void ConnectEdge(int x, int y)
	{
		edge[x].push_back(y);

		inDegree[y]++;
	}

	void Sort()
	{
		std::queue<int> queue;

		for (int i = 1; i < SIZE; i++)
		{
			if (inDegree[i] == 0)
			{
				queue.push(i);
			}
		}

		for (int i = 1; i < SIZE; i++)
		{
			if (queue.empty())
			{
				break;
			}

			int x = queue.front();

			queue.pop();

			cout << x << " ";

			for (int j = 0; j < edge[x].size(); j++)
			{
				int y = edge[x][j];

				inDegree[y]--;

				if (inDegree[y] <= 0)
				{
					queue.push(y);
				}
			}
		}
	}
};

int main()
{
#pragma region 위상 정렬
	// 방향 그래프에 존재하는 각 정점들의 선행 순서를 지키며
	// 모든 정점을 차례대로 진행하는 알고리즘입니다.

	// 사이클이 발생하는 경우 위상 정렬을 수행할 수 없습니다.
	
	// DAG(Directed Acyclic Graph) : 사이클이 존재하지 않는 그래프
	// 시간 복잡도 O (V + E) 
	
	// 위상 정렬
	// 1. 진입 차수가 0인 정점을 Queue에 삽입합니다.

	// 2. Queue에서 원소를 꺼내 연결된 모든 간선을 제거합니다.
	
	// 3. 간선 제거 이후에 진입 차수가 0이 된 정점을 Queue에 삽입합니다.
	
	// 4. Queue가 비어있을 때까지 2번 ~ 3번을 반복 수행합니다.  
	
	Graph graph;

	graph.ConnectEdge(1, 2);
	graph.ConnectEdge(1, 5);
	graph.ConnectEdge(2, 3);
	graph.ConnectEdge(3, 4);
	graph.ConnectEdge(3, 5);
	graph.ConnectEdge(4, 6);
	graph.ConnectEdge(5, 6);
	graph.ConnectEdge(6, 7);

	graph.Sort();

#pragma endregion



	return 0;
}
