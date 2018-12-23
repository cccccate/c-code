//文件名：return_
//作  者：ccate
//时  间：2018.12
//描  述：函数的返回值
//void没有返回值，其他类型都有返回值

#include<stdio.h>

int test()
{
	return 10;//返回的值可以是变量，常量，表达式
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