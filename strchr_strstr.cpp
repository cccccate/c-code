//文件名：strchr_strstr
//作  者：ccate
//时  间：2018.12
//描  述：strchr在指定的字符串里找指定的字符
//        strstr在指定的字符串里找指定的字符串

#include<stdio.h>
#include <string.h>

int main()
{
	char a[100] = "hello world";
	char *s;
	char *m;
	s = strchr(a,'l');//返回l开头的字符串
	if(s != NULL)
		printf("%s\n",s);//结果是llo world

	m = strstr(a,'wo');//返回wo开头的字符串
		if(m != NULL)
		printf("%s\n",m);//结果是world
	return 0;
}