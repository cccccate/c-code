//文件名：_10_2
//作  者：ccate
//时  间：2018.12
//描  述：十进制转化为二进制（运用递归思路）

#include <stdio.h>

void to_bin(unsigned int n)
{
	int i = n % 2;//取余
	//printf ("%d\n",i);
	if (n>=2)
		to_bin(n / 2);//取整
	printf ("%d",i);//只需改变printf的位置就可以改变输出顺序
}

int main003()
{
	to_bin(10);
	return 0;
}
