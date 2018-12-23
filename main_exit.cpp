//文件名：main_exit
//作  者：ccate
//时  间：2018.12
//描  述：exit是c语言的库函数需要包含stdlib.h的头文件，有一个整型的参数，代表程序终止
//return:
//在函数中写return只是代表函数终止了，不管在程序的任何位置调用exit，那么进程就马上终止了
//在main函数中执行return语句，程序终止，但在子函数中执行return只是子函数终止了，但是main函数没有终止
//exit:
//在程序中任何部位(包括子函数）调用exit，程序终止！

#include<stdio.h>
#include<stdlib.h>

void test5()
{
	return;
	printf("test\n");//return后，不会被执行
}
int main()
{
	//exit(0);//一般写0代表正常终止
	printf("main\n");//执行
	return 0;
	printf("hello\n");//不会执行
}