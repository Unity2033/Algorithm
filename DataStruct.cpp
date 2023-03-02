#include <iostream>

#define SIZE 8
using namespace std;

int heapArray[SIZE];
int index = 0;

void Insert(int data)
{
    if(index == )

    heapArray[++index] = data;
}

int main()
{
    // 자료구조 (힙)
    // 최댓값과 최솟값을 찾아내는 연산을
    // 빠르게 수행하기 위해 고안된 완전 이진트리를
    // 기반으로 한 자료구조입니다.

    // 부모 노드 접근 공식 : 자식 노드 index / 2
    // 왼쪽 자식 노드 접근 공식 : 부모 노드 index * 2
    // 오른쪽 자식 노드 접근 공식 : 부모 노드 index * 2 + 1

    Insert(10);
    Insert(20);
    Insert(30);
    Insert(40);
    Insert(50);

    for (int i = 1; i <= 5; i++)
    {
        cout << heapArray[i] << endl;
    }

    return 0;
}