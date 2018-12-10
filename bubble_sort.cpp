//文件名：bubble_sort
//作  者：ccate
//时  间：2018.12
//描  述：冒泡排序法，元素两两比较，先找出最大值，再找出次大值,,,共进行N-1次循环

#include<stdio.h>

int main8()
{
	int a[] = {123,463,97,53,677,724,6,876,908};
	int i,j;
	int cycle_index = sizeof(a)/sizeof(a[0]);

	for (i=0;i<cycle_index;i++)
	{
		for (j=1;j<cycle_index-i;j++)
			if (a[j-1]>a[j])
			{
				int tmp = a[j-1];
				a[j-1] = a[j];
				a[j]= tmp;
			}
	}
	for (i=0;i<cycle_index;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}