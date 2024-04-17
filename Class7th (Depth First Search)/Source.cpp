#include <iostream>
#include <vector>

using namespace std;

#define SIZE 9

class Graph
{
private:
	bool visited[SIZE];
	vector<int> graph[SIZE];

public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
		}
	}

	void InsertEdge(int vertex, int edge)
	{
		graph[vertex].push_back(edge);
	}

	void DFS(int start)
	{
		// 현재 노드를 방문한 것으로 표시합니다.
		visited[start] = true;

		// 현재 노드를 출력합니다.
		cout << start << " ";

		// 현재 노드와 연결된 다른 노드를 재귀적으로 방문합니다.
		for (int i = 0; i < graph[start].size(); i++)
		{
			// 현재 노드와 연결된 다음 노드를 가져옵니다.
			int next = graph[start][i];

			if (visited[next] == false)
			{
				// 다음 노드가 방문하지 않은 노드라면 `DFS` 함수를 호출합니다.
				DFS(next);
			}
		}
	}
};

int main()
{
#pragma region 깊이 우선 탐색 (Depth First Search)
	// root 노드에서 시작해서 다음 분기로 넘어가기 전에
	// 해당 분기를 완벽하게 탐색하는 방법입니다.

	// 깊이 우선 탐색은 스택 자료구조를 사용합니다

	// 1. 시작 노드를 스택에 넣고 방문 처리합니다.

	// 2. 스택의 최상단 노드에 방문하지 않은 인접 노드가 있으면
	//    그 노드를 스택에 넣고 방문 처리합니다.

	// 3. 방문하지 않은 인접 노드가 없으면 스택에서 최상단 노드를 꺼냅니다.

	// 4. 더 이상 2번의 과정을 수행할 수 없을 때까지 반복합니다.

	Graph graph;

	graph.InsertEdge(1, 2);
	graph.InsertEdge(1, 3);
	graph.InsertEdge(1, 8);

	graph.InsertEdge(2, 1);
	graph.InsertEdge(2, 7);

	graph.InsertEdge(3, 1);
	graph.InsertEdge(3, 4);
	graph.InsertEdge(3, 5);

	graph.InsertEdge(4, 3);
	graph.InsertEdge(4, 5);

	graph.InsertEdge(5, 3);
	graph.InsertEdge(5, 4);

	graph.InsertEdge(6, 7);

	graph.InsertEdge(7, 2);
	graph.InsertEdge(7, 6);
	graph.InsertEdge(7, 8);

	graph.InsertEdge(8, 1);
	graph.InsertEdge(8, 7);

	graph.DFS(1);

#pragma endregion



	return 0;
}

