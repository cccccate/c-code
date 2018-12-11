//文件名：rand_srand
//作  者：ccate
//时  间：2018.12
//描  述：rand:随机数；srand：随机数种子
//增加头文件#include<stdlib.h>

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//计算机的时钟不停改变
//#include<time.h> time函数是c语言的库函数，功能是得到系统当前时间

int main5()
{
	int a;
	int i;
	unsigned int tm = time(NULL);
	srand(tm);  //只要种子不同，rand产生的随机水就不同，如果种子相同，rand产生的随机数就一样
	for (i=0;i<100;i++)
	{
		a=rand()%101;//生成0-100的随机数
		printf("%d\n",a);
	}
	return 0;
}
