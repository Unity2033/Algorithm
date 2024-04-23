#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Graph
{
private:
	class Edge
	{
	private:
		int x;
		int y;
		int distance;
	public:
		Edge(int x, int y, int distance)
		{
			this->x = x;
			this->y = y;
			this->distance = distance;
		}



		bool operator < (const Edge & edge)
		{
			return this->distance < edge.distance;
		}		
	};

	std::vector <Edge> edgeList;

public:

	void CreateEdge(int x, int y, int distance)
	{		
		edgeList.push_back(Edge(x, y, distance));
	}

	void Sort()
	{
		sort(edgeList.begin(), edgeList.end());
	}
};

int main()
{
#pragma region 신장 트리 (Spanning Tree)
	// - 그래프의 모든 정점을 포함하면서 사이클이 존재하지 않는 부분 그래프
	// - 그래프의 모든 정점을 최소 비용으로 연결하는 트리
	// - 그래프의 정점의 수가 n개일 때, 간선의 수는 n-1개입니다.

	Graph graph;

	graph.CreateEdge(1, 2, 67);
	graph.CreateEdge(1, 4, 28);
	graph.CreateEdge(1, 5, 15);
	graph.CreateEdge(1, 7, 12);

	graph.CreateEdge(2, 4, 60);
	graph.CreateEdge(1, 5, 60);

	graph.CreateEdge(3, 5, 22);
	graph.CreateEdge(3, 6, 33);

	graph.CreateEdge(4, 7, 13);

	graph.CreateEdge(5, 6, 42);
	graph.CreateEdge(5, 7, 73);

	graph.Sort();


	// - 최소 비용 신장 트리 (Minimum Spanning Tree, MST)
	//   : 그래프의 간선들의 가중치 합이 최소인 신장 트리
		
#pragma endregion


	return 0;
}
