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
    // ��� ��ü�� �����ؾ� �մϴ�.
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
        // 1. �ڱ� �ڽ��� �����͸� ����մϴ�.
        cout << root->data << endl;

        // 2. ���� ��� �湮
        Preorder(root->left);

        // 3. ������ ��� �湮
        Preorder(root->right);
    }
}

int main()
{
    // Ʈ�� ������?
    // �� ��忡�� �����ؼ� �ٸ� �������� ��ȸ�Ͽ�
    // �ڱ� �ڽſ��� ���ƿ��� ��ȯ�� ���� ���� �׷����Դϴ�.

    // ���� Ʈ����?
    // �ִ� 2���� �ڽ� ��带 ������ Ʈ���Դϴ�.
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