//�ļ�����fobonacci
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ��������쳲���������(��0��Ϊ0����1��Ϊ1���ӵڶ��ʼ��ÿһ�����ǰ����֮��
//�ݹ������Ե�ʱ�򳣼������ǳ�����������ά��
#include <stdio.h>

int fib(int n)//��n��
{
	if (n==0)
		return 0;
	if (n==1)
		return 1;
	return fib(n-1) + fib(n-2);
}

int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\n",fib(i));
	}
	return 0;
}