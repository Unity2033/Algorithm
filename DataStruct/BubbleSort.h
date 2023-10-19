#pragma once
#include <iostream>

using namespace std;

#define SIZE 5

#pragma region ������ �����ε�
class Vector2
{
private:
	int x;
	int y;
public:
	Vector2(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	Vector2 operator+(const Vector2& vector2)
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

	Vector2 operator++()
	{
		this->x++;
		this->y++;

		return *this;
	}

	Vector2 operator++(int)
	{
		Vector2 clone = *this;

		++this->x;
		++this->y;

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
#pragma region ��ǰ ����
	// ���� ������ �� ���Ҹ� �˻��Ͽ� �����ϴ� �˰����Դϴ�.

	// �ð� ���⵵ O(n^2)

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

#pragma region ������ �����ε�
	Vector2 Up(0, 1);
	Vector2 Right(1, 0);

	// clone ��ü (1,1)
	Vector2 temp = Up + Right;

	Vector2 a = temp++;

	cout << a.GetX() << endl;
	cout << a.GetY() << endl;

	++temp;

	cout << temp.GetX() << endl;
	cout << temp.GetY() << endl;

#pragma endregion

}

