//文件名：strcat_strncat
//作  者：ccate
//时  间：2018.12
//描  述：strcat字符串追加strncat字符串有限追加
//用strcat的时候要注意第一个字符串一定要有足够的空间

#include<stdio.h>
#include<string.h>

int main()
{
	char a[10] = "abc";
	char b[100] = "hello123456";
	//strcat(a,b);//将a和b合并为一个字符串，结果放入a
	strncat(a,b,5);//要保证后面的参数小于a的空间
	printf("%s\n",a);
	return 0;
}