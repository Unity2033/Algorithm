#define _CRT_SECURE_NO_WARNINGS // ���ڿ� ���� �Լ� ���� ���� ���� ������ ���� ����
#include <iostream>

using namespace std;

// ���ڿ� ���� �Լ� (strcpy)
class Person
{
public :
    const char * name;
    char nickName [20];
};

int main()
{
    // ���ڿ� ���� �Լ�
    /*
    Person person;

    // ��� ���� ������
    person.name = "Kim";
    person.name = "Lee";

    // 8 byte
    // [F][A][K][E][R][\0][\0][]
    char temp [20] = "FAKERQRQRRQRQR";
    char temp1[20] = "Kang";

    // �迭�� �̸��� �迭�� ���� �ּҸ� �ǹ��մϴ�.
    
    // ������ ���
    // [F][A][K][E][R][\0] <- [F][A][K][E][R]
    // strcpy
    // ù ��° �Ű����� : ������� ���� �迭
    // �� ��° �Ű����� : �����ų ���� �迭
    strcpy(person.nickName, temp);
    strcpy(person.nickName, temp1);

    cout << "person.nickName : " << person.nickName << endl;
    */  

    // ���� ����
    // �־��� ����Ʈ �߿��� �ּڰ��� ã�� ���� �� ���� �� �տ�
    // ��ġ�� ���� ��ü�ϴ� �����Դϴ�.

    int array[5] = { 15, 3, 11, 1, 4 };

    for (int i = 0; i < 5; i++)
    {
        // 1. �ּڰ��� �Ǵ� ���� �ε��� ����
        int minIndex = i;

        for (int j = i; j < 5; j++)
        {
            if (array[minIndex] > array[j])
            {
                minIndex = j;
            }
        }

        swap(array[minIndex], array[i]);
    }

    for (const int & element : array)
    {
        cout << element << endl;
    }

    // �ð� ���⵵ O(n^2)

    return 0;
}