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
    // �ڷᱸ�� (��)
    // �ִ񰪰� �ּڰ��� ã�Ƴ��� ������
    // ������ �����ϱ� ���� ��ȵ� ���� ����Ʈ����
    // ������� �� �ڷᱸ���Դϴ�.

    // �θ� ��� ���� ���� : �ڽ� ��� index / 2
    // ���� �ڽ� ��� ���� ���� : �θ� ��� index * 2
    // ������ �ڽ� ��� ���� ���� : �θ� ��� index * 2 + 1

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