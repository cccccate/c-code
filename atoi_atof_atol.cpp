//�ļ�����atoi_atof_atol
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ����atoi������һ���ַ���ת��Ϊһ������
//        atof������һ��С����ʽ���ַ���ת��Ϊһ��������
//        atol������һ���ַ���ת����long����

#include <stdio.h>
#include <stdlib.h>

int main01()
{
	char a[100] = "123";//���ַ���ת��Ϊ����
	int i = 0;
	i = atoi(a);
	printf("%d\n",i);//���Ϊ123
	return 0;
}

int main02()
{
	char c[100] = "123";
	char b[100] = "456";

	int i = 0;
	i = atoi(c)+atoi(b);
	printf("%d\n",i);//���Ϊ579
	return 0;
}

int main()
{
	char c[100] = "123.5";
	double f = atof(c);
	printf("%f\n",f);//���123.500000
	return 0;
}