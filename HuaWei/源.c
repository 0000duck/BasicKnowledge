unsigned int LISS(const int array[], size_t length, int result[])
{
	unsigned int i, j, k, max;

	//�䳤���������C99�����ԣ����ڼ�¼��ǰ��Ԫ����Ϊ���Ԫ�ص���������г���
	unsigned int liss[length];

	//ǰ��Ԫ�����飬��¼��ǰ�Ը�Ԫ����Ϊ���Ԫ�صĵ��������и�Ԫ�ص�ǰ���ڵ㣬���ڴ�ӡ������
	unsigned int pre[length];

	for (i = 0; i < length; ++i)
	{
		liss[i] = 1;
		pre[i] = i;
	}

	for (i = 1, max = 1, k = 0; i < length; ++i)
	{
		//�ҵ���array[i]Ϊ��ĩԪ�ص������������
		for (j = 0; j < i; ++j)
		{
			//���Ҫ��ǵݼ�������ֻ�轫array[j] < array[i]�ĳ�<=��
			//���Ҫ��ݼ�������ֻ���Ϊ>
			if (array[j] < array[i] && liss[j] + 1> liss[i])
			{
				liss[i] = liss[j] + 1;
				pre[i] = j;

				//�õ���ǰ����������еĳ��ȣ��Լ��������е���ĩԪ�ص�λ��
				if (max < liss[i])
				{
					max = liss[i];
					k = i;
				}
			}
		}
	}

	//�������
	i = max - 1;

	while (pre[k] != k)
	{
		result[i--] = array[k];
		k = pre[k];
	}

	result[i] = array[k];

	return max;
}