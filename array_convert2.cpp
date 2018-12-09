//文件名：array_convert
//作  者：ccate
//时  间：2018.12
//描  述：数组逆置（第一个元素与最后一个元素交换，第二个与倒数第二个。。。）
//a[0]和a[1]两个元素交换的思路
//int tmp;
//tmp = a[0];
//a[0] = a[1];
//a[1] = tmp;

#include <stdio.h>

int main()
{
	int a[] = {1,234,432,4,56,23,49,122};
	int min=0;//数组最小下标
	int max=0;//数组最大下标
	int tmp;//元素交换的中间值

	max = sizeof(a)/sizeof(a[0])-1;
	while(min<max)
	{
		tmp = a[min];
		a[min] = a[max];
		a[max] = tmp;
		min++;
		max--;
	}
	int i;
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}

	return 0;
}