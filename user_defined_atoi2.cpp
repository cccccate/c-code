//�ļ�����user_defined_atoi2
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ����C���Կ⺯��atoi���ܣ���һ���ַ���ת��Ϊ����
//Ҫ���Զ���һ��������ʵ��atoi�Ĺ��ܣ�Ҫ���ǲ���ʹ���κ�c�������еĿ⺯��
//"123"��������'1' '2' '3' '\0'
//˼·��
//�����ַ���������һ��'1'ȡ����ת��Ϊ����1����1*100(ǰ���ǵ�֪���ַ����ж೤��
//'2'ȡ����ת��Ϊ����2����2*10
//'3'ȡ����ת��Ϊ����3

#include<stdio.h>

int mystrlen(const char *s)//�õ��ַ����ĳ���
{
	int len = 0;
	while(s[len])
	{
		len++;
	}
	return len;
}

int mypow10(int n)//�õ�10��n�η�
{
	if (n==0)
		return 1;
	if (n==1)
		return 10;

	int i;
	int base = 10;
	for(i=1;i<n;i++)
	{
		base *=10;
	}
	return base;
}

int mychartoint(char c)//��һ���ַ���ת��Ϊһ����0��9������
{
	return c - '0';
}

int my_atoi(const char *nptr) //������һ��char������
{
	int len = mystrlen(nptr);//�õ��ַ�������

	int i;
	int value =0;
	for(i=0;i<len;i++)
	{
		value += mychartoint(nptr[i]) * mypow10(len-i-1);
	}
	return value;
}

int main()
{
	char a[] = "123";
	int i = my_atoi(a);
	printf("%d\n",i);
	return 0;
}