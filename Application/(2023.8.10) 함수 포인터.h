#pragma once
#include <stdio.h>
#include <string.h>

#pragma region 함수 포인터  
// 함수의 주소값을 저장하고 가리킬 수 있는 변수입니다.

void Delegate()
{
	printf("대리자~");
}

int Add(int x, int y)
{
	return x + y;
}

int Substract(int x, int y)
{
	return x - y;
}

int Multiple(int x, int y)
{
	return x * y;
}

int Divide(int x, int y)
{
	return x / y;
}

void Calculator(int x, int y, int (*cptr) (int, int))
{
	printf("cptr 함수의 결과 : %d\n", cptr(x, y));
}
#pragma endregion


int main()
{
#pragma region 함수 포인터

	// 함수 포인터는 함수의 반환형과 매개 변수의 타입이 일치해야 하며,
	// 함수 포인터를 사용하여 동적으로 메모리를 할당할 수 없습니다.
	// void (*fptr) ();
	// 
	// Calculator(1, 1, Add);
	// Calculator(20, 10, Substract);
	// Calculator(5, 5, Multiple);
	// Calculator(20, 20, Divide);
	// 
	// fptr = Delegate;
	// 
	// fptr();

#pragma endregion

#pragma region 소수 판별 알고리즘

	//	int number = 0;
	//	int count = 0;
	//	
	//	scanf_s("%d", &number);
	//	
	//	for (int i = 2; i <= number; i++)
	//	{
	//		if (number % i == 0)
	//		{
	//			count++;
	//		}
	//	}
	//	
	//	if (count == 1)
	//	{
	//		printf("소수입니다.\n");
	//	}
	//	else
	//	{
	//		printf("소수가 아닙니다.\n");
	//	}

#pragma endregion

#pragma region 회문 판별 알고리즘

	int flag = 0;

	const char* content = "asdda";

	int size = strlen(content);

	// [l][e]   [v]   [e][l]   
	for (int i = 0; i < size / 2; i++)
	{
		if (content[i] == content[size - 1 - i])
		{
			flag = 1;
		}
		else
		{
			flag = 0;
			break;
		}
	}

	if (flag == 1)
	{
		printf("회문입니다.");
	}
	else
	{
		printf("회문이 아닙니다.");
	}


#pragma endregion

	return 0;
}

