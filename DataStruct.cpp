#include <iostream>

#define SIZE 8
using namespace std;

int heapArray[SIZE];
int index = 0;

void Insert(int data)
{
    if (index == SIZE - 1)
    {
        cout << "HEAP IS FULL" << endl;
        return;
    }

    heapArray[++index] = data;

    // heapify
    int child = index;
    int parent = index / 2;

    while (child > 1)
    {
        if (heapArray[parent] < heapArray[child])
        {
            swap(heapArray[parent], heapArray[child]);
        }

        child = parent;
        parent = child / 2;
    }
}

int Delete()
{
    int result = heapArray[1];

    if (index == 0)
    {
        cout << "Heap is Empty" << endl;
        return 0;
    }

    heapArray[1] = heapArray[index];
    heapArray[index] = NULL;

    index--;

    // heapify
    int parent = 1;

    while (parent * 2 <= index)
    {
        int child = parent * 2;

        if (heapArray[child] < heapArray[child + 1])
        {
            child++;
        }

        if (heapArray[child] < heapArray[parent])
        {
            break;
        }

        swap(heapArray[child], heapArray[parent]);
        parent = child;
    }

    return result;
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

    Delete();

    for (int i = 1; i <= index; i++)
    {
        cout << heapArray[i] << endl;
    }


    return 0;
}