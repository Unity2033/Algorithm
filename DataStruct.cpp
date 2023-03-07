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
    // 1. 노드를 추가합니다.
    Node * newNode = new Node;

    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL; 

    // 2. 해시 인덱스를 구합니다.
    int hashIndex = HashFunction(key);

    // 3.노드를 해당 Bucket의 인덱스에 연결하는 작업
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
    // 1. 해시 인덱스를 구합니다.
    int hashIndex = HashFunction(key);

    // 2. 순회용 포인터 선언합니다.
    Node * currentNode = bucket[hashIndex].head;
    Node * prevNode = NULL;

    bool check = false;

    // 3. 해당하는 key값을 찾아주세요.
    while (currentNode != NULL)
    {
        // 해당하는 키를 찾았다면
        if (currentNode->key == key)
        {
            // 삭제하고 싶은 key가 head라면
            if (currentNode == bucket[hashIndex].head)
            {
                bucket[hashIndex].head = currentNode->next;
            }
            else // 삭제하고 싶은 key가 head가 아니라면
            {
                prevNode->next = currentNode->next;
            }

            bucket[hashIndex].size--;
            check = true;

            // 해당하는 노드를 삭제합니다.
            delete currentNode;

            // 해당 노드를 삭제하고 반복문 빠져나와야 합니다.
            break;
        }

        prevNode = currentNode;
        currentNode = currentNode->next;
    }

    if (check == true)
    {
        cout << "KEY : " << key << "가 삭제되었습니다." << endl;
    }
    else
    {
        cout << "KEY가 존재하지 않아 삭제가 진행되지 않습니다." << endl;
    }
}

int main()
{
    // 해시 테이블
    // 해시함수를 통해서 변환된 값을 index로 삼아서
    // key와 value 형태로 저장하는 자료구조입니다.

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