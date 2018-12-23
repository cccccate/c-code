//文件名：user_defined_atoi
//作  者：ccate
//时  间：2018.12
//描  述：自定义函数实现小写转换为大写，大写转换成小写的功能

#include<stdio.h>

/*
int main()
{
	char a = 'a' - ' ';//a转换为A，减一个空格
	char b = 'A';
	printf("%d,%d\n",a,b);//a的ASCII码是97，A的ASCII码是65，差32（一个空格）
	printf("a=%c\n",a);
	return 0;
}
*/

char trans(char c)
{
	if(c >= 'a' && c <= 'z')
		return c - ' ';
	if(c >= 'A' && c <= 'Z')
		return c + ' ';
}

int main()
{
	char a = 'r';
	printf("%c\n",trans(a));

	char b = 'B';
	printf("%c\n",trans(b));
	return 0;
}
