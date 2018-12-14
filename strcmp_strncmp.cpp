//文件名：strcmp_strncmp
//作  者：ccate
//时  间：2018.12
//描  述：比较两个字符串是否相同
//strncmp可以指定比较的字符是前几个

#include<stdio.h>
#include<string.h>

int main()
{
	char a[100] = "abc";
	char b[100] = "abcd";
	if(a == b)  //不能通过这种方式比较两个字符串是否相同
	{
		;
	}
	//if(strcmp(a,b) == 0)  //比较ab是否相同
	if(strncmp(a,b,4) == 0)  //strncmp可以指定比较的字符有几个
	{
		printf("相同\n");
	}
	else
	{
		printf("不相同\n");
	}
	return 0;
}
