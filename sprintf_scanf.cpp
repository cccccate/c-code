//文件名：sprintf_sscanf
//作  者：ccate
//时  间：2018.12
//描  述：printf是向标准输出设备输出一个字符串
//        sprintf是向一个char的数组输出一个字符串（与printf用法基本一致，多了第一个参数)

#include<stdio.h>

int main01()
{
	char a[100];
	int i = 100;
	sprintf(a,"%s%d%x","hello world",i,i);//把输出输到a，再输出a的值
	printf("%s\n",a);
	return 0;
}

int main02()
{
	char a[100] = "56+72";
	int i;
	int j;
	sscanf(a,"%d+%d",&i,&j);
	printf("%d +%d = %d\n",i,j,i+j);
	return 0;
}