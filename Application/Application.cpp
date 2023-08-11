#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int life;
int computer;
int answer;

void Init()
{
	srand(time(NULL));

	life = 5;
	computer = rand() % 50 + 1;
}

void Update()
{
	printf("��ǻ�Ͱ� ������ �ִ� �� : ");
	scanf_s("%d", &answer);
}

void Render()
{
	if (computer == answer)
	{
		printf("\n���ӿ��� �¸��Ͽ����ϴ�.\n");
		exit(1);
	}
	else if (computer > answer)
	{
		printf("\n��ǻ�Ͱ� ������ �ִ� ������ �۽��ϴ�.\n");
		life--;
	}
	else if (computer < answer)
	{
		printf("\n��ǻ�Ͱ� ������ �ִ� ������ Ů�ϴ�.\n");
		life--;
	}

	if (life <= 0)
	{
		printf("\n���ӿ��� �й��Ͽ����ϴ�.\n");
	}
}



int main()
{
#pragma region ���� �Լ�
	// 0 ~ 32767 ������ ���� ���� ��ȯ�ϴ� �Լ��Դϴ�.

	//	int seed = 0;
	//	
	//	// 1970�� 1�� 1�� ~
	//	srand(time(NULL));
	//	
	//	for (int i = 0; i < 10; i++)
	//	{ 
	//		seed = rand() % 10 + 1;
	//		printf("seed�� �� : %d \n", seed);
	//	}
#pragma endregion

#pragma region UP-DOWN ����

	// ���� ������ �ʱ�ȭ
	Init();

	while (life > 0)
	{
		// ���� ������Ʈ �Լ�
		Update();

		// ���� ������ �Լ�
		Render();
	}


#pragma endregion


	return 0;
}

