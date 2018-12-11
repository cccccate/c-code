//文件名：del_blank
//作  者：ccate
//时  间：2018.12
//描  述：删除字符串后的空格"hello     "->"hello"

#include<stdio.h>

int main3()
{
	char a[] = "hello     ";
	int index = 0;
	while (a[index])
	{
		if (a[index] == ' ')
		{
			a[index] = 0;
			break;
		}
		index++;
	}
	printf("(%s\n)",a);
	return 0;
}