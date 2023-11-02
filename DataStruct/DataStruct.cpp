#include "MaxHeap.h"

int main()
{
	MaxHeap<int> maxHeap;

	maxHeap.Insert(30);
	maxHeap.Insert(40);
	maxHeap.Insert(15);
	maxHeap.Insert(31);
	maxHeap.Insert(55);

	maxHeap.Display();
	
	return 0;
}

