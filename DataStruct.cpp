#include <iostream>

using namespace std;

int arr[8] = { 5, 3, 1, 2, 4, 7, 6, 8 };

void MergeSort(int data [], int start, int middle, int end)
{
    // left ����, right ����
    // ���� ��ų �迭�� �ε����� ������Ű�� ���� (temp)
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

    // ���� �ִ� �迭 ������� �־��ֱ�
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

    // ���ĵ� �迭�� �����͸� ���Դϴ�.
    for (int i = start; i <= end; i++)
    {
        data[i] = arr[i];
    }                
}

void Division(int data [], int left, int right)
{
    if (left < right)
    {
        // middle ���� ����
        int middle = (left + right) / 2;

        // ���� ���� ��� �Լ�
        Division(data, left, middle);

        // ������ ���� ��� �Լ�
        Division(data, middle + 1, right);

        // ����    
        MergeSort(data, left, middle, right);
    }
}

int main()
{
    // ���ڿ� ������
    /*
    string content;

    cin >> content;

    for (int i = 0; i < content.length() / 2; i++)
    {
        swap(content[i], content[content.length() - 1 - i]);
    }                

    cout << content << endl;
    */

    // ���� ����
    // �ϳ��� ����Ʈ�� �� ���� �յ��� ũ��� �����ϰ�
    // ���ҵ� �κ� ����Ʈ�� ������ ����, �� ���� ���ĵ�
    // �κ� ����Ʈ�� ���Ͽ� ��ü�� ���ĵ� ����Ʈ�� �ǵ��� 
    // �����ϴ� �˰����Դϴ�.
    Division(arr, 0, 7);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << endl;
    }


    return 0;
}