#include <iostream>
#include "HashTable.h"

int main()
{
	HashTable<string, int> hashTable;
	
	hashTable.Insert("ABC", 100);
	hashTable.Insert("DEF", 200);
	hashTable.Insert("GHI", 300);
	hashTable.Insert("TTA", 400);
	hashTable.Insert("BDW", 500);

	hashTable.Display();

	return 0;
}