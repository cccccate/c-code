//�ļ�����array_convert
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  �����������ã���һ��Ԫ�������һ��Ԫ�ؽ������ڶ����뵹���ڶ�����������
//a[0]��a[1]����Ԫ�ؽ�����˼·
//int tmp;
//tmp = a[0];
//a[0] = a[1];
//a[1] = tmp;

#include <stdio.h>

int main()
{
	int a[] = {1,234,432,4,56,23,49,122};
	int min=0;//������С�±�
	int max=0;//��������±�
	int tmp;//Ԫ�ؽ������м�ֵ

	max = sizeof(a)/sizeof(a[0])-1;
	while(min<max)
	{
		tmp = a[min];
		a[min] = a[max];
		a[max] = tmp;
		min++;
		max--;
	}
	int i;
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}

	return 0;
}