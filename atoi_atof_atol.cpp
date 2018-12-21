//文件名：atoi_atof_atol
//作  者：ccate
//时  间：2018.12
//描  述：atoi函数把一个字符串转化为一个整数
//        atof函数把一个小数形式的字符串转换为一个浮点数
//        atol函数把一个字符串转换成long类型

#include <stdio.h>
#include <stdlib.h>

int main01()
{
	char a[100] = "123";//把字符串转换为整数
	int i = 0;
	i = atoi(a);
	printf("%d\n",i);//结果为123
	return 0;
}

int main02()
{
	char c[100] = "123";
	char b[100] = "456";

	int i = 0;
	i = atoi(c)+atoi(b);
	printf("%d\n",i);//结果为579
	return 0;
}

int main()
{
	char c[100] = "123.5";
	double f = atof(c);
	printf("%f\n",f);//结果123.500000
	return 0;
}