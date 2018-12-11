//文件名：char_array_string
//作  者：ccate
//时  间：2018.12
//描  述：字符串数组初始化

#include<stdio.h>

int main01()
{
	//char a[4];  //数组初始化1
	//a[0]='a';
	//a[1]='b';
	//a[2]='c';
	//a[3]='\0';
	//char a[10] = {'a','b','c'};//数组初始化2
	char a[] = "abc";//数组初始化3，最常用
	//char a[10] = { 0 };//初始化为0-1
	//char a[10] = "";//初始化为0-2
	printf("%s\n",a);

	int i;
	for (i=0; i<sizeof(a); i++)
	{
		printf("a[%d]=%d\n",i,a[i]);//输出97,98,99,0，都是ASCII码
	}
	return 0;
}