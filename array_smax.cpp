//�ļ�����array_smax
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ���������������ֵ�Ͷ���ֵ

# include <stdio.h>

int main()
{
	int a[] = {1,234,432,4,56,23,49};
	int i;
	int smax = a[1];
	int max = a[0];

	if (a[1]>a[0])
	{
		smax = a[0];
		max = a[1];
	}

	for(i = 0; i < sizeof(a) / sizeof(a[0]); i++)//��������
	{
		if (a[i]>max)
		{
			smax = max;
			max = a[i];
		}
		else if (a[i]>smax && a[i]<max)
		{
			smax = a[i];
		}

	}
	printf("max = %d\n", max);
	printf("smax = %d\n", smax);
	return 0;
}