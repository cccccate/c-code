//�ļ�����array_max
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ���������������ֵ�����������������Աֵ�����
//���ǵ�Ϊ���������int tmp = a[0];

# include <stdio.h>

int main()
{
	int a[] = {1,234,432,4,56,23,49};
	int i;
	int tmp = a[0];//Ҫ��������Ǹ��������
	for(i = 0; i < sizeof(a) / sizeof(a[0]); i++)//��������
	{
		if (a[i] > tmp)
			tmp = a[i];
	}
	printf("max = %d\n", tmp);
	return 0;
}