#include <iostream>

using namespace std;

int count[8] = { 5, 3, 1, 2, 4, 7, 6, 8 };

void MergeSort(int data [], int start, int middle, int end)
{
    // left 변수, right 변수
    // 정렬 시킬 배열의 인덱스를 증가시키는 변수 (temp)
    int left = start;
    int right = middle + 1;
    int temp = start;

    while (left <= middle && right <= end)
    {
        if (data[left] <= data[right])
        {
            arr[temp++] = data[left++];
        }
        else // data[left] > data[right]
        {
            arr[temp++] = data[right++];
        }
    }

    // 남아 있는 배열 순서대로 넣어주기
    if (left > middle)
    {
        for (int x = right; x <= end; x++)
        {
            arr[temp++] = data[x];
        }
    }
    else
    {
        for (int x = left; x <= middle; x++)
        {
            arr[temp++] = data[x];
        }
    }

    // 정렬된 배열에 데이터를 삽입니다.
    for (int i = start; i <= end; i++)
    {
        data[i] = arr[i];
    }                
}

void Division(int data [], int left, int right)
{
    if (left < right)
    {
        // middle 변수 선언
        int middle = (left + right) / 2;

        // 왼쪽 분할 재귀 함수
        Division(data, left, middle);

        // 오른쪽 분할 재귀 함수
        Division(data, middle + 1, right);

        // 병합    
        MergeSort(data, left, middle, right);
    }
}

int main()
{
    // 문자열 뒤집기
    /*
    string content;

    cin >> content;

    for (int i = 0; i < content.length() / 2; i++)
    {
        swap(content[i], content[content.length() - 1 - i]);
    }                

    cout << content << endl;
    */

    // 병합 정렬
    // 하나의 리스트를 두 개의 균등한 크기로 분할하고
    // 분할된 부분 리스트를 정렬한 다음, 두 개의 정렬된
    // 부분 리스트를 합하여 전체가 정렬된 리스트가 되도록 
    // 정렬하는 알고리즘입니다.
    Division(arr, 0, 7);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << endl;
    }


    return 0;
}
