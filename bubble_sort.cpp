//�ļ�����bubble_sort
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ����ð�����򷨣�Ԫ�������Ƚϣ����ҳ����ֵ�����ҳ��δ�ֵ,,,������N-1��ѭ��

#include<stdio.h>

int main8()
{
	int a[] = {123,463,97,53,677,724,6,876,908};
	int i,j;
	int cycle_index = sizeof(a)/sizeof(a[0]);

	for (i=0;i<cycle_index;i++)
	{
		for (j=1;j<cycle_index-i;j++)
			if (a[j-1]>a[j])
			{
				int tmp = a[j-1];
				a[j-1] = a[j];
				a[j]= tmp;
			}
	}
	for (i=0;i<cycle_index;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}