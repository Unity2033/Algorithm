#pragma once

#include <iostream>

using namespace std;

#pragma region 이진 탐색 트리 (BST)
  // 임의의 키를 가진 원소를 삽입, 삭제, 검색하는데
  // 효율적인 알고리즘입니다.

#pragma endregion

template <typename T>
class BinarySearchTree
{
private:
	struct Node
	{
		T data;
		Node* left;
		Node* right;
	};

	Node * rootNode;

public:

	BinarySearchTree()
	{
		rootNode = nullptr;
	}

	Node * GetRoot()
	{
		return rootNode;
	}

	void Insert(T data, Node * root)
	{
		if (root == nullptr)
		{
			root = new Node;
			root->data = data;
			root->left = nullptr;
			root->right = nullptr;
		}
	}
};