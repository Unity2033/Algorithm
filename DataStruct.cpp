#include <iostream>

#define SIZE 10
using namespace std;

int main()
{
    // ��� ����
    /*
    // �������� ���� ���� ������ �ʰ�, �ܼ��ϰ� �� ���ڰ�
    // �� �� �ִ��� ������ ���� ������ ���� �����ϴ� �˰����Դϴ�.

    int array[5] = { 0, };
    int item[SIZE] = { 1, 5, 3, 2, 1, 2, 2, 3, 4, 4 };

    for (int i = 0; i < SIZE; i++)
    {
        array[item[i] - 1] += 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }
    */

    // �빮�ڷ� �Է��� ���ڸ� �ҹ��ڷ� �ٲٴ� �˰���
    string content;
    cin >> content;

    for (int i = 0; i < content.length(); i++)
    {
        if (content[i] >= 'A' && content[i] <= 'Z')
        {
            content[i] += 32;
        }
    }

    cout << content << endl;

    return 0;
}