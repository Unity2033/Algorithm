#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node * left;
	Node * right;
};

Node * CreateNode(int data, Node * left, Node * right)
{
	// 1. ���ο� ��带 �����մϴ�.
	Node * newNode = new Node;

	// 2. ���ο� ����� data ���� �����մϴ�.
	newNode->data = data;

	// 3. ���ο� ����� left ���� �����մϴ�.
	newNode->left = left;

	// 4. ���ο� ����� right ���� �����մϴ�.
	newNode->right = right;

	// 5. ���ο� ����� �ּڰ��� ��ȯ�մϴ�.
	return newNode;
}

// ���� ��ȸ
// 1. Root Node�� �湮�մϴ�.
// 2. ���� ���� Ʈ���� ���� ��ȸ�մϴ�.
// 3. ������ ���� Ʈ���� ���� ��ȸ�մϴ�.



// ���� ��ȸ
// 1. ���� ���� Ʈ���� ���� ��ȸ�մϴ�.
// 2. Root Node�� �湮�մϴ�.
// 3. ������ ���� Ʈ���� ���� ��ȸ�մϴ�.



// ���� ��ȸ
// 1. ���� ���� Ʈ���� ���� ��ȸ�մϴ�.
// 2. ������ ���� Ʈ���� ���� ��ȸ�մϴ�.
// 3. Root Node�� �湮�մϴ�.


int main()
{
#pragma region Ʈ�� 
	// �׷����� �������� ������ ������
	// �̿��Ͽ� �������� ��ġ ���¸� �߻�ȭ�� �ڷ� �����Դϴ�.

	Node * node7 = CreateNode(7, nullptr, nullptr);
	Node * node6 = CreateNode(6, nullptr, nullptr);
	Node * node5 = CreateNode(5, nullptr, nullptr);
	Node * node4 = CreateNode(4, nullptr, nullptr);
	Node * node3 = CreateNode(3, node6, node7);
	Node * node2 = CreateNode(2, node4, node5);
	Node * node1 = CreateNode(1, node2, node3);

#pragma endregion



}

