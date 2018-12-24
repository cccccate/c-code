//文件名：recursion2
//作  者：ccate
//时  间：2018.12
//描  述：递归实例：n个人排成一排，问第n个人多少岁，他说比前一个人大2岁，
//再问前一个，说比前一个大2岁，一直问到最后一个人，回答10岁

#include <stdio.h>

int age(int n)
{
	if (n==1)//递归终止条件
		return 10;//直接返回10岁
	return age(n-1)+2;
}
int main002()
{
	int a = 5;
	printf("%d\n",age(5));
	return 0;
}