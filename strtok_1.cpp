//文件名：_strtok
//作  者：ccate
//时  间：2018.12
//描  述：strtok查找字符分割的子串

#include<stdio.h>
#include <string.h>

int main01()
{
	char a[100] = "123_abcjjj_dwhdojj_756747";
	char *s;//定义一个char类型的指针变量

	s = strtok(a,"_");//查找以_分割的子串
	printf("%s\n",s);//结果为123，只把第一个_的前面的字符串提取出来了

	s = strtok(NULL,"_");//第二次调用的时候第一个参数写空
	printf("%s\n",s);//结果为abcjjj

	s = strtok(NULL,"_");//第三次调用
	printf("%s\n",s);//结果为dwhdojj

	s = strtok(NULL,"_");//第四次调用
	printf("%s\n",s);//结果为756747

	s = strtok(NULL,"_");//第五次调用
	printf("%s\n",s);//结果为(null)，如果strtok已经到了字符串结尾，继续调用返回NULL
	return 0;
}
//以上写法过于复杂繁琐，精简版如下

int main()
{
	char a[100] = "123_abcjjj_dwhdojj_756747";
	char *s;//定义一个char类型的指针变量
	s = strtok(a,"_");//查找以_分割的子串
	while(s)
	{
		printf("%s\n",s);
		s = strtok(NULL,"_");
	}

	return 0;
}