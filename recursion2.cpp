//�ļ�����recursion2
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  �����ݹ�ʵ����n�����ų�һ�ţ��ʵ�n���˶����꣬��˵��ǰһ���˴�2�꣬
//����ǰһ����˵��ǰһ����2�꣬һֱ�ʵ����һ���ˣ��ش�10��

#include <stdio.h>

int age(int n)
{
	if (n==1)//�ݹ���ֹ����
		return 10;//ֱ�ӷ���10��
	return age(n-1)+2;
}
int main002()
{
	int a = 5;
	printf("%d\n",age(5));
	return 0;
}