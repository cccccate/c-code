//文件名：ch_count
//作  者：ccate
//时  间：2018.12
//描  述：统计字符串中汉字的数量
//思  路：汉字在用3/2个负的ASCII码表示，统计数量/3或2

#include<stdio.h>

int main()
{
	char a[100] = "我cate是a葱";

	int tmp = 0;
	int index = 0;

	while(a[index])
	{
		if(a[index]<0)
		{
			tmp++;
		}
		index++;
	}

	printf("汉字的数量为%d",tmp/2);
	return 0;
}