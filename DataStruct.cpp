#include <iostream>

using namespace std;


int arr[10] = { 4,1,2,3,9,7,8,6,10,5 };

void QuickSort(int data [], int start, int end)
{
    // left, right, pivot 변수
    int pivot = start;
    int left = pivot + 1;
    int right = end;

    while (left <= right)
    {
        // left가 end보다 작거나 같다면 반복
        // 왼쪽에 있는 left 변수를 pivot과 비교합니다.
        while (left <= end && arr[left] < arr[pivot])
        {
            left++;
        }

        // right가 start보다 크다면
        // 오른쪽에 있는 right 변수를 pivot과 비교합니다.
        while (right > start && arr[right] > arr[pivot])
        {
            right--;
        }

        // if 왼쪽과 오른쪽이 엇갈렸을 때
        if (left > right)
        {
            swap(arr[pivot], arr[right]);
        }
        // else right와 left의 값을 교환합니다.
        else
        {
            swap(arr[right], arr[left]);
        }
    }

    // 분할 정복
    

}

int main()
{
    // 기점이 되는 키를 기준으로 작거나 같은 값을
    // 지닌 데이터는 앞으로 이동하고 큰 값을 지닌
    // 데이터는 뒤로 이동합니다.

    // 그리고 작은 값과 큰 값을 분리하면서 정렬하는 알고리즘입니다.
  
    QuickSort(arr, 0, 9);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}