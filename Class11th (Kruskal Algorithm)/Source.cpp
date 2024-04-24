#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define SIZE 10

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

		int& X()
		{
			return x;
		}

		int& Y()
		{
			return y;
		}

		int& Distance()
		{
			return distance;
		}

		bool operator < (const Edge& edge)
		{
			return this->distance < edge.distance;
		}
	};

	std::vector <Edge> edgeList;

	int sum;
	int parent[SIZE];
public:

	Graph()
	{
		sum = 0;

		for (int i = 0; i < SIZE; i++)
		{
			parent[i] = i;
		}
	}

	int Find(int x)
	{
		if (x == parent[x])
		{
			return x;
		}
		else
		{
			return parent[x] = Find(parent[x]);
		}
	}

	void Union(int x, int y)
	{
		x = Find(x);
		y = Find(y);

		if (x < y)
		{
			// x가 y보다 작으면 x가 y의 부모가 됩니다.
			parent[y] = x;
		}
		else
		{
			// y가 x보다 작으면 y가 x의 부모가 됩니다.
			parent[x] = y;
		}
	}

	bool Same(int x, int y)
	{
		x = Find(x);
		y = Find(y);

		if (x == y)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void CreateEdge(int x, int y, int distance)
	{
		edgeList.push_back(Edge(x, y, distance));
	}

	void Sort()
	{
		sort(edgeList.begin(), edgeList.end());
	}

	void Kruskal()
	{
		for (int i = 0; i < edgeList.size(); i++)
		{
			// 싸이클이 존재하지 않으면 Edge에 있는 Distance을 sum 변수에 넣어줍니다.
			if (Same(edgeList[i].X(), edgeList[i].Y()) == false)
			{
				sum += edgeList[i].Distance();
				Union(edgeList[i].X(), edgeList[i].Y());
			}
		}
	}

	int& Cost()
	{
		return sum;
	}
};

int main()
{
#pragma region 신장 트리 (Spanning Tree)
	// - 그래프의 모든 정점을 포함하면서 사이클이 존재하지 않는 부분 그래프
	// - 그래프의 모든 정점을 최소 비용으로 연결하는 트리
	// - 그래프의 정점의 수가 n개일 때, 간선의 수는 n-1개입니다.

	Graph graph;

	graph.CreateEdge(1, 2, 15);
	graph.CreateEdge(1, 3, 5);
	graph.CreateEdge(2, 3, 25);
	graph.CreateEdge(2, 5, 36);
	graph.CreateEdge(3, 4, 55);
	graph.CreateEdge(4, 5, 24);
	graph.CreateEdge(4, 6, 28);
	graph.CreateEdge(5, 6, 31);

	graph.Sort();

	graph.Kruskal();

	cout << "graph의 최소 비용 : " << graph.Cost() << endl;

	// - 최소 비용 신장 트리 (Minimum Spanning Tree, MST)
	//   : 그래프의 간선들의 가중치 합이 최소인 신장 트리

#pragma endregion




	return 0;
}
