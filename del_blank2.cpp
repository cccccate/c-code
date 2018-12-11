//文件名：del_blank2
//作  者：ccate
//时  间：2018.12
//描  述：删除字符串后的空格,而不能去掉字符串中间的空格
//思  路：从右往左看，遇到非空格就把右边的字符设置为0

#include<stdio.h>

int main4()
{
	char a[100] = "hello   cate   ";
	int index = 0;
	
	while(a[index])
	{
		index++;
	}
	int i;
	for(i = index-1;i>=0;i--)
	{
		if (a[i] != ' ')
		{
			a[i+1] = 0;
			break;
		}
	}
	printf("(%s)\n",a);
	return 0;
}