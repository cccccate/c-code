//�ļ�����return_
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ���������ķ���ֵ
//voidû�з���ֵ���������Ͷ��з���ֵ

#include<stdio.h>

int test()
{
	return 10;//���ص�ֵ�����Ǳ��������������ʽ
}

int add(int a,int b)
{
	return a+b;
}

int max(int i, int j)
{
	return (i>j)?i:j;
}
int main()
{
	int i,m,k;
	i=test();
	m=add(2,3);
	k=max(2,3);
	printf("%d\n", i);
	printf("%d\n", m);
	printf("%d\n", k);
	return 0;
}