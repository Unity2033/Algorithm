#include <iostream>
#include <Vector>

using namespace std;

#define SIZE 5

#pragma region 연산자 오버로딩
class Vector2
{
private :
	int x;
	int y;
public :
	Vector2(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	Vector2 operator+(const Vector2 & vector2)
	{
		Vector2 clone(this->x + vector2.x, this->y + vector2.y);
									 
		return clone;
	}

	Vector2 operator-(const Vector2& vector2)
	{
		Vector2 clone(this->x - vector2.x, this->y - vector2.y);

		return clone;
	}

	Vector2 operator*(const Vector2& vector2)
	{
		Vector2 clone(this->x * vector2.x, this->y * vector2.y);

		return clone;
	}

	Vector2 operator/(const Vector2& vector2)
	{
		Vector2 clone(this->x / vector2.x, this->y / vector2.y);

		return clone;
	}
		 
	int GetX()
	{
		return x;
	}

	int GetY()
	{
		return y;
	}
};

#pragma endregion


int main()
{
#pragma region 거품 정렬
	// 서로 인접한 두 원소를 검사하여 정렬하는 알고리즘입니다.

	// 시간 복잡도 O(n^2)

	//int bubbleBuffer[SIZE] = { 0,4,3,2,1 };

	//for (int i = 0; i < SIZE-1; i++)
	//{
	//	for (int j = 0; j < (SIZE - i) - 1; j++)
	//	{
	//		if (bubbleBuffer[j] > bubbleBuffer[j + 1])
	//		{
	//			swap(bubbleBuffer[j], bubbleBuffer[j+1]);
	//		}
	//	}
	//}

	//for (const int & element : bubbleBuffer)
	//{
	//	cout << element << " ";
	//}
#pragma endregion

#pragma region 연산자 오버로딩
	Vector2 Up(0, 1);
	Vector2 Right(1, 0);

	// clone 객체 (1,1)
	Vector2 temp = Up + Right;

	cout << temp.GetX() << endl;
	cout << temp.GetY() << endl;





#pragma endregion



		
}

