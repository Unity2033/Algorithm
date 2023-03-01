#include <iostream>

#define SIZE 10
using namespace std;

int main()
{
    // 계수 정렬
    /*
    // 데이터의 값을 직접 비교하지 않고, 단순하게 각 숫자가
    // 몇 개 있는지 갯수를 세어 저장한 다음 정렬하는 알고리즘입니다.

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

    // 대문자로 입력한 문자를 소문자로 바꾸는 알고리즘
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