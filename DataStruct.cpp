#include <iostream>

using namespace std;


int arr[10] = { 4,1,2,3,9,7,8,6,10,5 };

void QuickSort(int data [], int start, int end)
{
    // left, right, pivot ����
    int pivot = start;
    int left = pivot + 1;
    int right = end;

    while (left <= right)
    {
        // left�� end���� �۰ų� ���ٸ� �ݺ�
        // ���ʿ� �ִ� left ������ pivot�� ���մϴ�.
        while (left <= end && arr[left] < arr[pivot])
        {
            left++;
        }

        // right�� start���� ũ�ٸ�
        // �����ʿ� �ִ� right ������ pivot�� ���մϴ�.
        while (right > start && arr[right] > arr[pivot])
        {
            right--;
        }

        // if ���ʰ� �������� �������� ��
        if (left > right)
        {
            swap(arr[pivot], arr[right]);
        }
        // else right�� left�� ���� ��ȯ�մϴ�.
        else
        {
            swap(arr[right], arr[left]);
        }
    }

    // ���� ����
    

}

int main()
{
    // ������ �Ǵ� Ű�� �������� �۰ų� ���� ����
    // ���� �����ʹ� ������ �̵��ϰ� ū ���� ����
    // �����ʹ� �ڷ� �̵��մϴ�.

    // �׸��� ���� ���� ū ���� �и��ϸ鼭 �����ϴ� �˰����Դϴ�.
  
    QuickSort(arr, 0, 9);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}