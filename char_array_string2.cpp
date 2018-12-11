//文件名：char_array_string2
//作  者：ccate
//时  间：2018.12
//描  述：char数组与字符串的区别

#include<stdio.h>

int main02()
{
	char a[10] = "hello";
	//a[3] = 0;  //输出结果为hel，因为字符串以0结尾，所以后面的元素不输出
	//对于字符串来讲：hel，对于数组来讲，他的成员数量没有变化
	a[3] = '1';
	a[4] = 'b';
	a[5] = 'a';
	printf("%s\n",a);
	return 0;
}