//�ļ�����ch_string
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ���������ַ�������
//˼  ·����UTF8ģʽ�£�һ������ռ��3���ֽڣ�BYTE����
//        ��GBK�£�2��BYTE��windowsĬ��GBK����
//        һ�����ֵĵ�һ���ֽ�����С��0��һ������;
//        ��3���ֽ�Ϊ��λ���н�����1->��3��2->��2��3->��1�����ܴﵽ�����ַ���������


#include<stdio.h>

int main()
{
	char a[100] = "һ������ǧ��Ĵ�";
	int min = 0;
	int max = 0;

	while(a[max+1])
	{
		max++;
	}
	char tmp;
	while (min<max)
	{
		//GBKģʽ��
		tmp = a[min];
		a[min] = a[max-1];
		a[max-1] = tmp;//������β�����ֵĵ�һ���ֽ�

		tmp = a[min+1];
		a[min+1] = a[max];
		a[max] = tmp;//������β�����ֵĵڶ����ֽ�

		max -= 2;
		min += 2;
		
		/*//UTF8ģʽ��
		tmp = a[min];
		a[min] = a[max-2];
		a[max-2] = tmp;//������β�����ֵĵ�һ���ֽ�

		tmp = a[min+1];
		a[min+1] = a[max-1];
		a[max-1] = tmp;//������β�����ֵĵڶ����ֽ�

		tmp = a[min+2];
		a[min+2] = a[max];
		a[max] = tmp;//������β�����ֵĵ������ֽ�

		max -= 3;
		min += 3;
		*/
	}
	printf("%s\n", a);

	/*
	char a[100] = "һ������ǧ��Ĵ�";
	char b[100] = "abc";
	int i;
	for (i=0;i<20;i++)
	{
		printf("%d\n", a[i]);
		//printf("%d\n", b[i]);
	}
	*/
	return 0;
}