#pragma once
#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
};

Node* CreateNode(int data, Node* left, Node* right)
{
	// 1. 새로운 노드를 생성합니다.
	Node* newNode = new Node;

	// 2. 새로운 노드의 data 값을 저장합니다.
	newNode->data = data;

	// 3. 새로운 노드의 left 값을 저장합니다.
	newNode->left = left;

	// 4. 새로운 노드의 right 값을 저장합니다.
	newNode->right = right;

	// 5. 새로운 노드의 주솟값을 반환합니다.
	return newNode;
}

// 전위 순회
// 1. Root Node를 방문합니다.
// 2. 왼쪽 서브 트리를 전위 순회합니다.
// 3. 오른쪽 서브 트리를 전위 순회합니다.
void Preorder(Node* root)
{
	if (root != nullptr)
	{
		cout << root->data << " ";
		Preorder(root->left);
		Preorder(root->right);
	}
}

// 중위 순회
// 1. 왼쪽 서브 트리를 전위 순회합니다.
// 2. Root Node를 방문합니다.
// 3. 오른쪽 서브 트리를 전위 순회합니다.
void Inorder(Node* root)
{
	if (root != nullptr)
	{
		Inorder(root->left);
		cout << root->data << " ";
		Inorder(root->right);
	}
}

// 후위 순회
// 1. 왼쪽 서브 트리를 전위 순회합니다.
// 2. 오른쪽 서브 트리를 전위 순회합니다.
// 3. Root Node를 방문합니다.
void Postorder(Node* root)
{
	if (root != nullptr)
	{
		Postorder(root->left);
		Postorder(root->right);
		cout << root->data << " ";
	}
}

int main()
{
#pragma region 트리 
	// 그래프의 일종으로 정점과 간선을
	// 이용하여 데이터의 배치 형태를 추상화한 자료 구조입니다.

	Node* node7 = CreateNode(7, nullptr, nullptr);
	Node* node6 = CreateNode(6, nullptr, nullptr);
	Node* node5 = CreateNode(5, nullptr, nullptr);
	Node* node4 = CreateNode(4, nullptr, nullptr);
	Node* node3 = CreateNode(3, node6, node7);
	Node* node2 = CreateNode(2, node4, node5);
	Node* node1 = CreateNode(1, node2, node3);

	Preorder(node1);

	cout << endl;

	Inorder(node1);

	cout << endl;

	Postorder(node1);


#pragma endregion



}

