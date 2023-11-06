#pragma once
#include <iostream>

using namespace std;

#define SIZE 5

#pragma region �ؽ� ���̺�
   // (Key, Value)�� �����͸� �����ϴ� �ڷ� ���� �� �ϳ���
   // ������ �����͸� �˻��� �� �ִ� �ڷ� �����Դϴ�.

   // �ؽ� ���̺��� ��� �ð� ���⵵�� O(1)�Դϴ�.

   // �ؽ� �浹�� �ذ��ϴ� ���

   // <ü�̴� ���>
   // �� �ؽ� ��Ŷ�� ���� ����Ʈ�� �����ϴ� ����Դϴ�.
  
   // �ؽ� �浹 �߻� �� ������ �ؽ� ���� �ش��ϴ� �����͵���
   // ���Ḯ��Ʈ�� �����Ͽ� �����մϴ�.

   // <���� �ּҹ�>
   // �浹 �߻� �� �� ���Ͽ� �����͸� �����ϴ� ����Դϴ�.

   // �� ��Ŷ�� ��� ������ ���� ���� ���� ����� �޶����ϴ�.

   // ���� Ž�� : �浹 �߻� �� �տ��� ���� ���ʴ�� �� ��Ŷ�� ã��
   // ���� �����ϴ� ����Դϴ�.

   // ���� Ž�� : �浹 �߻� �� 2^, 2^3 ��ŭ ������ �� ��Ŷ�� ã��
   // ���� �����ϴ� ����Դϴ�.

   // ���� �ؽ� : �ؽ� ���� �ѹ� �� �ؽ� �Լ��� �־� �ٸ� �Լ���
   // �����ϴ� ����Դϴ�.
#pragma endregion


template<typename KEY, typename VALUE>
class HashTable
{
private :
	struct Node
	{
		KEY key;
	    VALUE value;

		Node * next;
	};

	struct Bucket
	{
		int count;
		Node * head;
	};

	Bucket bucket[SIZE];
public :
	HashTable()
	{
		for (int i = 0; i < SIZE; i++)
		{
			bucket[i].count = 0;
			bucket[i].head = nullptr;
		}
	}

	int HashFunction(KEY key)
	{
		int sumValue = 0;

		for (const char & element : key)
		{
			sumValue += (int)element;
		}

		int hashIndex = sumValue % SIZE;

		return hashIndex;
	}
	
	Node * CreateNode(KEY key, VALUE value)
	{
		Node * newNode = new Node;

		newNode->key = key;

		newNode->value = value;

		newNode->next = nullptr;

		return newNode;
	}

	void Insert(KEY key, VALUE value)
	{
		// �ؽ� �Լ��� ���ؼ� ���� �޴� �ӽ� ����
		int hashIndex = HashFunction(key);

		// ���ο� ��带 �����մϴ�.
		Node* newNode = CreateNode(key, value);

		// ��尡 1�� �� �������� �ʴ´ٸ�
		if (bucket[hashIndex].count == 0)
		{
			// 1. bucket[hashIndex]�� head �����Ϳ� ���ο� ����� �ּڰ��� �����մϴ�.
			bucket[hashIndex].head = newNode;

			// 2. bucket[hashIndex]�� count ������ ���� ������ŵ�ϴ�.
			bucket[hashIndex].count++;
		}
		else // ��尡 1�� �� �����Ѵٸ�
		{
			// 1. NewNode�� next�� bucket[hashIndex]�� head�� ���� �־��ݴϴ�.
			newNode->next = bucket[hashIndex].head;

			// 2. bucket[hashIndex].head�� ��� ���� ������ ����� �ּҸ� ����Ű�� �մϴ�.
			bucket[hashIndex].head = newNode;

			// 3. bucket[hashIndex].count�� ���� ������ŵ�ϴ�.
			bucket[hashIndex].count++;
		}
		
	}


};



