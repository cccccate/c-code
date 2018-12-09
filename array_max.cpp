//文件名：array_max
//作  者：ccate
//时  间：2018.12
//描  述：查找数组最大值，数组数量和数组成员值是随机
//考虑到为负数的情况int tmp = a[0];

# include <stdio.h>

int main()
{
	int a[] = {1,234,432,4,56,23,49};
	int i;
	int tmp = a[0];//要考虑如果是负数的情况
	for(i = 0; i < sizeof(a) / sizeof(a[0]); i++)//遍历数组
	{
		if (a[i] > tmp)
			tmp = a[i];
	}
	printf("max = %d\n", tmp);
	return 0;
}