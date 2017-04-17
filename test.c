
#include"BinarySearchTree.h"
int main()
{
	int a[] = { 5, 3, 4, 1, 7, 8, 2, 6, 0, 9 };
	BinarySearchTree<int>t;
	t.Insert(5);
	t.Insert(3);
	t.Insert(4);
	t.Insert(1);
	t.Insert(7);
	t.Insert(8);
	t.Insert(2);
	//t.Insert(6);
	t.Insert(0);
	t.Insert(9);
	t.Remove(7);
	system("pause");
	return 0;
}
