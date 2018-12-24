//文件名：multi_files
//作  者：ccate
//时  间：2018.12
//描  述：多文件编译（vs新建项目，添加三个源文件main.cpp multi.cpp multi.h)
//main.cpp: 主程序
//multi.cpp: 放2个函数max001和add001
//multi.h: 函数的声明
//注意：.c放定义.h放声明

#include <stdio.h>
#include "multi.h"//双引号表示当前目录下

int main()
{
	int a =10, b=20;
	printf("%d\n",max001(a,b));
	printf("%d\n",add001(a,b));
	return 0;
}
