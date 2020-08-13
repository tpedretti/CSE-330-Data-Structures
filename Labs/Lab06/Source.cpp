#include <time.h>
#include "BinarySearchTree.h"

//void fillBST(int amt, BinarySearchTree<int>& bst);

int main()
{
	BinarySearchTree<int> myBst;
	int amt = 10;

	srand(time(0));
	int randomNum = rand() % 10000;
	
	for (int i = 0; i < amt; i++) 
	{
		myBst.insert(randomNum);
		randomNum = rand() % 10000;
	}


	return 0;
}


//void fillBST(int amt, BinarySearchTree<int>& bst)
//{
//	srand(time(0));
//	int randomNum = rand() % 10000;
//
//	for (int i = 0; i < amt; i++) 
//	{
//		bst.insert(randomNum);
//		randomNum = rand() % 10000;
//	}
//}