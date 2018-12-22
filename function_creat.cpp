//文件名：function_creat
//作  者：ccate
//时  间：2018.12
//描  述：函数的定义和声明

#include<stdio.h>

//自定义函数add(函数名注意符合规范），返回类型是int，两个参数a和b
int add(int a, int b)
{
	return a+b;
}

//自定义函数，没有返回值（void），没有参数
void test()
{
	printf("test\n");
}

void test1();//函数的声明
int main()
{
	//自定义函数add的调用
	int i = 2;
	int j = 5;
	int c = add(i,j);
	printf("%d\n",c);

	//如何调用一个没有返回值没有参数的函数，如test（）
	test();
	test1();
	return 0;
}

//test1函数定义在main之后，必须要在main函数之前进行声明
void test1()
{
	printf("test1\n");
}