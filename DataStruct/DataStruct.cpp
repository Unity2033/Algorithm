#include <iostream>
#include "BinarySearchTree.h"

using namespace std;

int main()
{

	BinarySearchTree<int> bst;
	bst.Insert(1, bst.GetRoot());

	return 0;
}

