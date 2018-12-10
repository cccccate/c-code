//文件名：array2_init_def2
//作  者：ccate
//时  间：2018.12
//描  述：二维数组的定义和初始化
#include <stdio.h>

int main10()
{
	int a2[][3] = {{1,2,3},{34.52,12},{12,5,0}};  

	int i,j;

		for (i=0;i<sizeof(a2)/sizeof(a2[0]);i++)  //遍历一个二维数组，把数组中每个成员输出
	{
		for (j=0;j<sizeof(a2[0])/sizeof(a2[0][0]);j++)
		{
			printf("a2[%d][%d]=%d\n",i,j,a2[i][j]);
		}
	}
	return 0;
}
