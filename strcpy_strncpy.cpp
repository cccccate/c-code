//文件名：strcpy_strncpy
//作  者：ccate
//时  间：2018.12
//描  述：字符串拷贝与字符串有限拷贝
//注意a要能放得下b

#include<stdio.h>
#include<string.h>

int main()
{
	char a[100] = "abc";
	char b[100] = "1234";
	//字符串拷贝：把b的内容拷贝到a里面
	/*
	int index = 0;
	while(b[index])
	{
		a[index] = b[index];
		index++;
	}
	*/
	//strcpy(a, b);
	strncpy(a,b,sizeof(a) - 1);//注意结尾的0，这样就能根据a的大小来存放字符串了
	printf("%s\n",a);
	return 0;
}