#include <iostream>

using namespace std;


int main()
{
    // ���� ����
    // �迭�� ��� ��Ҹ� �տ������� ���ʴ�� �̹� ���ĵ�
    // �迭�� ���Ͽ�, �ڽ��� ��ġ�� ã�� �����ϴ� �����Դϴ�.

    int array[5] = { 5, 3, 7, 1, 2 };
    int key = 0;
    int j = 0;

    for (int i = 1; i < 5; i++)
    {
        key = array[i];

        for (j = i - 1; j >= 0 && array[j] > key; j--)
        {
            array[j + 1] = array[j];
        }

        array[j + 1] = key;
    }

    for (const int& element : array)
    {
        cout << element << endl;
    }

    return 0;
}