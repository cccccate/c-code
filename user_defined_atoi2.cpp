//文件名：user_defined_atoi2
//作  者：ccate
//时  间：2018.12
//描  述：C语言库函数atoi功能，将一个字符串转化为整数
//要求：自定义一个函数，实现atoi的功能，要求是不能使用任何c语言已有的库函数
//"123"————'1' '2' '3' '\0'
//思路：
//遍历字符串，将第一个'1'取出来转化为整数1，把1*100(前提是得知道字符串有多长）
//'2'取出来转化为整数2，把2*10
//'3'取出来转化为整数3

#include<stdio.h>

int mystrlen(const char *s)//得到字符串的长度
{
	int len = 0;
	while(s[len])
	{
		len++;
	}
	return len;
}

int mypow10(int n)//得到10的n次方
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

int mychartoint(char c)//把一个字符串转化为一个从0到9的整数
{
	return c - '0';
}

int my_atoi(const char *nptr) //参数是一个char的数组
{
	int len = mystrlen(nptr);//得到字符串长度

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