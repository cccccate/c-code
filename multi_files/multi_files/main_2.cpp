//文件名：multi_files
//作  者：ccate
//时  间：2018.12
//描  述：多文件编译如何避免重复声明
//在.h文件中增加ifndef


#include <stdio.h>
#include "multi.h"//双引号表示当前目录下
#include "multi.h"
#include "multi.h"

//#define TEST  //宏定义

int main()
{
	/*
	#ifdef TEST  //如果定义了TEST这个宏，就编译下面的代码，ifdef开头endif结尾
	printf("hello\n");
	#endif

	#ifndef TEST //如果没有定义TEST这个宏，就编译下面的代码,ifndef开头endif结尾
	printf("world\n");
	#endif
	*/

	int a =10, b=20;
	printf("%d\n",max001(a,b));
	printf("%d\n",add001(a,b));
	return 0;
}