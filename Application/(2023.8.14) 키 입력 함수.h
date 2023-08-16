#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void gotoXY(int x, int y)
{
	// x, y 좌표 설정
	COORD position = { x, y };

	// 커서 이동
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}


int main()
{
#pragma region _kbhit() 함수

	//	char key = 0;
	//	int x = 5;
	//	int y = 5;
	//	
	//	// Update( )
	//	while (1)
	//	{
	//		gotoXY(x, y);
	//		printf("★");
	//	
	//		if (_kbhit()) // 키보드 입력을 확인하는 함수
	//		{
	//			key = _getch();
	//	
	//			if (key == -32)
	//			{
	//				key = _getch();
	//			}
	//	
	//			switch (key)
	//			{
	//			case UP : if (y <= 0) break;
	//				    y--;
	//				break;
	//			case LEFT : if (x <= 0) break;
	//				    x--;
	//				break;
	//			case RIGHT : x++;
	//				break;
	//			case DOWN : y++;
	//				break;
	//			}
	//	
	//			// 스크린을 지우는 함수
	//			system("cls");
	//		}
	//	}
#pragma endregion

	return 0;
}

