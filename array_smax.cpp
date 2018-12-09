//文件名：array_smax
//作  者：ccate
//时  间：2018.12
//描  述：查找数组最大值和二大值

# include <stdio.h>

int main()
{
	int a[] = {1,234,432,4,56,23,49};
	int i;
	int smax = a[1];
	int max = a[0];

	if (a[1]>a[0])
	{
		smax = a[0];
		max = a[1];
	}

	for(i = 0; i < sizeof(a) / sizeof(a[0]); i++)//遍历数组
	{
		if (a[i]>max)
		{
			smax = max;
			max = a[i];
		}
		else if (a[i]>smax && a[i]<max)
		{
			smax = a[i];
		}

	}
	printf("max = %d\n", max);
	printf("smax = %d\n", smax);
	return 0;
}