//�ļ�����function_creat
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ���������Ķ��������

#include<stdio.h>

//�Զ��庯��add(������ע����Ϲ淶��������������int����������a��b
int add(int a, int b)
{
	return a+b;
}

//�Զ��庯����û�з���ֵ��void����û�в���
void test()
{
	printf("test\n");
}

void test1();//����������
int main()
{
	//�Զ��庯��add�ĵ���
	int i = 2;
	int j = 5;
	int c = add(i,j);
	printf("%d\n",c);

	//��ε���һ��û�з���ֵû�в����ĺ�������test����
	test();
	test1();
	return 0;
}

//test1����������main֮�󣬱���Ҫ��main����֮ǰ��������
void test1()
{
	printf("test1\n");
}