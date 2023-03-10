#include <iostream>

using namespace std;


int container[8] = { 5, 3, 1, 2, 4, 7, 6, 8 };


void MergeSort(int data [], int start, int middle, int end)
{
    int left = start;
    int right = middle + 1;
    int temp = start;

    while (left <= middle && right <= end)
    {
        if (data[left] < data[right])
        {
            container[temp++] = data[left++];
        }
        else // data[left] > data[right]
        {
            container[temp++] = data[right++];
        }
    }

    if (left > middle)
    {
        for (int x = right; x <= end; x++)
        {
            container[temp++] = data[x];
        }
    }
    else
    {
        for (int x = left; x <= middle; x++)
        {
            container[temp++] = data[x];
        }
    }

    for (int i = start; i <= end; i++)
    {
        data[i] = container[i];
    }                
}

void Division(int data [], int left, int right)
{
    if (left < right)
    {

        // middle 변???�언
        int middle = (left + right) / 2;

        // ?�쪽 분할 ?��? ?�수
        Division(data, left, middle);

        // 병합    
        MergeSort(data, left, middle, right);
    }
}

int main()
{

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
    Division(container, 0, 7);


    for (int i = 0; i < 8; i++)
    {
        cout << container[i] << endl;
    }


    return 0;
}
