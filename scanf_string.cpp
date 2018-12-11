//文件名：scanf_string
//作  者：ccate
//时  间：2018.12
//描  述：用scanf输入一个字符串

#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	char a[100] = {0};  //定义一个数组同时把成员初始化为0是一个好习惯
	scanf("%s",a);  //scanf缓冲区有溢出危险

	char b[100] = {0};
	scanf("%s",b);

	char c[100] = {0};

	int index_a = 0;
	while(a[index_a])
	{
		c[index_a] = a[index_a];
		index_a++;
	}

	int index_b = 0;
	while(b[index_b])
	{
		c[index_a+index_b] = b[index_b];
		index_b++;
	}

	printf("%s\n",c);
	return 0;
}