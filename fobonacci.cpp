//文件名：fobonacci
//作  者：ccate
//时  间：2018.12
//描  述：生成斐波那契数列(第0项为0，第1项为1，从第二项开始，每一项都等于前两项之和
//递归在面试的时候常见，但是程序难以理解和维护
#include <stdio.h>

int fib(int n)//第n项
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