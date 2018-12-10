//文件名：array2_init_def
//作  者：ccate
//时  间：2018.12
//描  述：二维数组的定义和初始化

#include <stdio.h>

int main9()
{
	int a2[2][10];  //a2二维数组，包含a2[0]和a2[1]两个一维数组（每个数组有10个元素）
	
	int i,j;
	int index = 0;
	for (i=0;i<2;i++)  //遍历一个二维数组，把数组中每个成员赋值
	{
		for (j=0;j<10;j++)
		{
			a2[i][j] = index++;
		}
	}
		for (i=0;i<2;i++)  //遍历一个二维数组，把数组中每个成员输出
	{
		for (j=0;j<10;j++)
		{
			printf("a2[%d][%d]=%d\n",i,j,a2[i][j]);
		}
	}
	printf("%u, %u, %u\n", sizeof(a2),sizeof(a2[0]),sizeof(a2[0][0]));
	return 0;
}
