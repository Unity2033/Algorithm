#include <iostream>

#define SIZE 5
using namespace std;

struct Node
{
    int key;
    int value;
    Node * next;
};

struct Bucket
{
    int size;
    Node * head;
};

struct Bucket * bucket = new Bucket[SIZE];

int HashFunction(int key)
{
    return key % SIZE;
}

void Insert(int key, int value)
{
    // 1. ��带 �߰��մϴ�.
    Node * newNode = new Node;

    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL; 

    // 2. �ؽ� �ε����� ���մϴ�.
    int hashIndex = HashFunction(key);

    // 3.��带 �ش� Bucket�� �ε����� �����ϴ� �۾�
    if (bucket[hashIndex].size == 0)
    {
        bucket[hashIndex].size++;
        bucket[hashIndex].head = newNode;
    }
    else if (bucket[hashIndex].size > 0)
    {
        newNode->next = bucket[hashIndex].head;
        bucket[hashIndex].head = newNode;
        bucket[hashIndex].size++;
    }
}


void Remove(int key)
{
    // 1. �ؽ� �ε����� ���մϴ�.
    int hashIndex = HashFunction(key);

    // 2. ��ȸ�� ������ �����մϴ�.
    Node * currentNode = bucket[hashIndex].head;
    Node * prevNode = NULL;

    bool check = false;

    // 3. �ش��ϴ� key���� ã���ּ���.
    while (currentNode != NULL)
    {
        // �ش��ϴ� Ű�� ã�Ҵٸ�
        if (currentNode->key == key)
        {
            // �����ϰ� ���� key�� head���
            if (currentNode == bucket[hashIndex].head)
            {
                bucket[hashIndex].head = currentNode->next;
            }
            else // �����ϰ� ���� key�� head�� �ƴ϶��
            {
                prevNode->next = currentNode->next;
            }

            bucket[hashIndex].size--;
            check = true;

            // �ش��ϴ� ��带 �����մϴ�.
            delete currentNode;

            // �ش� ��带 �����ϰ� �ݺ��� �������;� �մϴ�.
            break;
        }

        prevNode = currentNode;
        currentNode = currentNode->next;
    }

    if (check == true)
    {
        cout << "KEY : " << key << "�� �����Ǿ����ϴ�." << endl;
    }
    else
    {
        cout << "KEY�� �������� �ʾ� ������ ������� �ʽ��ϴ�." << endl;
    }
}

int main()
{
    // �ؽ� ���̺�
    // �ؽ��Լ��� ���ؼ� ��ȯ�� ���� index�� ��Ƽ�
    // key�� value ���·� �����ϴ� �ڷᱸ���Դϴ�.

    for (int i = 0; i < SIZE; i++)
    {
        bucket[i].head = NULL;
        bucket[i].size = 0;
    }

    Insert(10, 5);
    Insert(11, 77);

    Remove(11);


    return 0;
}