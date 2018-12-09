//文件名：array_num
//作  者：ccate
//时  间：2018.12
//描  述：输出数组元素

# include <stdio.h>

int main()
{
	int a[] = {1,234,432,4,56,23,49};
	printf("%d, %d\n",sizeof(a),sizeof(a[0]));
	int i;
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}