#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* CreateNode(int data, Node* leftChild, Node* rightChild)
{
    // 노드 객체를 생성해야 합니다.
    Node * newNode = new Node;

    newNode->data = data;

    newNode->left = leftChild;

    newNode->right = rightChild;

    return newNode;
}

void Preorder(Node * root)
{
    if (root != NULL)
    {
        // 1. 자기 자신의 데이터를 출력합니다.
        cout << root->data << endl;

        // 2. 왼쪽 노드 방문
        Preorder(root->left);

        // 3. 오른쪽 노드 방문
        Preorder(root->right);
    }
}

int main()
{
    // 트리 구조란?
    // 한 노드에서 시작해서 다른 정점들을 순회하여
    // 자기 자신에게 돌아오는 순환이 없는 연결 그래프입니다.

    // 이진 트리란?
    // 최대 2개의 자식 노드를 가지는 트리입니다.
    Node* node7 = CreateNode(70, NULL, NULL);
    Node* node6 = CreateNode(60, NULL, NULL);
    Node* node5 = CreateNode(50, NULL, NULL);
    Node* node4 = CreateNode(40, NULL, NULL);

    Node* node3 = CreateNode(30, node6, node7);
    Node* node2 = CreateNode(20, node4, node5);
    Node* node1 = CreateNode(10, node2, node3);
                        
    Preorder(node1);

    return 0;
}