template<typename K, int M>
struct BTreeNode
{
	K _keys[M];                         //M是孩子的个数，keys是关键值数组，多开辟一个便于处理  
	BTreeNode<K, M> *_subs[M + 1];      //孩子指针数组  
	BTreeNode<K, M> *_parent;           //指向父亲的指针  
	size_t _size;                       //记录关键值的个数   

	BTreeNode()
		:_parent(NULL)
		, _size(0)
	{
		for (int i = 0; i < M; i++)
		{
			_keys[i] = K();
			_subs[i] = NULL;
		}
		_subs[M] = NULL;
	}
};
