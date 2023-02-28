#include <iostream>

using namespace std;


int main()
{
    // 삽입 정렬
    // 배열의 모든 요소를 앞에서부터 차례대로 이미 정렬된
    // 배열과 비교하여, 자신의 위치를 찾아 삽입하는 정렬입니다.

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