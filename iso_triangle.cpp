// 文件名：iso_triangle
// 作  者：ccate
// 时  间：2018.12
// 描  述：循环嵌套-输出等腰三角形（根据输入的num决定等腰三角形的大小）

#include <stdio.h>

int main()
{
	int c,b,num;
	scanf("%d",&num);

	for(c=1;c<num;c++) //外层循环决定三角形大小
	{
		for (b=0;b<num-c;b++) //内层循环决定每行空格的数量
		{
			printf(" ");
		}
		for (b=0;b<2*c-1;b++) //内层循环决定每行*的数量
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}