#include <iostream>

using namespace std;

int main()
{
    // ��ǰ ���� 
    // ���� ������ �� ������ ��Ҹ� ���Ͽ�, ���ǿ� ���� �ʴٸ�
    // �ڸ��� ��ȯ�Ͽ� �����ϴ� �˰����Դϴ�.

    // ��ǰ ���� �ð� ���⵵
    // O(n^2)

    int array[5] = { 7, 52, 1, 11, 3 };

    // [7][52][1][11][3]

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; 4 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }

    for (const int& element : array)
    {
        cout << element << endl;
    }

    // �� ���� �ٲٴ� �Լ�
    // swap(array[0], array[1]);
          


    return 0;
}