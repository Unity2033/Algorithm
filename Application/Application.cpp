#include <stdio.h>
#include <stdarg.h>

#pragma region ���� �μ�
      // �μ��� ������ �������� ���� �μ��Դϴ�.
void Function(int x, ...)
{
    // 1. va_list  : �� ���� ������ ���� �ּҸ� ����ų �� �ִ� �������Դϴ�.
    va_list ptr;

    // 2. va_start : va_list�� ������� �����Ϳ��� ���� ������ �ּҸ� ������ �־�
    //               va_list�� ���� �ʱ�ȭ���� �ݴϴ�.
    va_start(ptr, x);

    // 3. va_arg   : va_list�� ����� var_type ���� �˻��� ��ȯ�ϰ�, va_list����
    //               ���� �μ��� ����Ű���� va_list�� �ּҸ� �̵����� ���� �μ���
    //               ���۵Ǵ� ��ġ�� �����մϴ�.

    printf("%d ", x);

    for (int i = 0; i < x; i++)
    {
        printf("%d ", va_arg(ptr, int));
    }

    printf("\n");

    // 4. va_end   : va_list�� ���� NULL�� �ʱ�ȭ�մϴ�.
    va_end(ptr);
}

#pragma endregion


int main()
{
    Function(4, 2, 3, 4, 5);
    Function(2, 10, 20);
    Function(5, 100, 200, 300, 400, 500);


	return 0;
}
