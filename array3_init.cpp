//文件名：array3_init
//作  者：ccate
//时  间：2018.12
//描  述：三维数组初始化及赋值
//原  则：尽量使用维度较少的数组来解决问题

#include<stdio.h>

int main11()
{
	int a[2][4][10];  //这是一个三维数组，有2个二维数组a[0]和a[1],一共2*4*10=80个元素
	//a[0][0][0] = 5;

	int i,j,k;
	int index = 0;
	for (i=0;i<2;i++)  //给三维数组的每个元素赋值
	{
		for(j=0;j<4;j++)
		{
			for(k=0;k<10;k++)
			{
				a[i][j][k] = index++;
			}
		}
	}

	for (i=0;i<2;i++)  //将三维数组的每个元素输出
	{
		for(j=0;j<4;j++)
		{
			for(k=0;k<10;k++)
			{
				printf("a[%d][%d][%d]=%d", i,j,k,a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}