//文件名：recursion1
//作  者：ccate
//时  间：2018.12
//描  述：函数的递归（自己调用自己)
//注意理解printf("n=%d\n",n)语句位置变化，输出结果也不同

#include <stdio.h>

void test001(int n)
{
	//printf("n=%d\n",n);//输出结果为n=0，，，，n=10
	if(n<10)
	{
		test001(n+1);
	}
	printf("n=%d\n",n);//输出结果为n=10，，，，n=0
}

int main001()
{
	int a = 0;
	test001(a);
	return 0;
}