//�ļ�����recursion1
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ���������ĵݹ飨�Լ������Լ�)
//ע�����printf("n=%d\n",n)���λ�ñ仯��������Ҳ��ͬ

#include <stdio.h>

void test001(int n)
{
	//printf("n=%d\n",n);//������Ϊn=0��������n=10
	if(n<10)
	{
		test001(n+1);
	}
	printf("n=%d\n",n);//������Ϊn=10��������n=0
}

int main001()
{
	int a = 0;
	test001(a);
	return 0;
}