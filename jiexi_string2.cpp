//文件名：jiexi_string2
//作  者：ccate
//时  间：2018.12
//描  述：解析字符串，计算"1+2=;33-4=;236/7=;23*6"中每一个的值并输出
//思  路：首先利用strtok函数按；把每一个算式提出
//        然后计算每个算式的值并输出到同一行；
//        新建空b，利用strcat把每个算式追加到b中
//        最后用strcpy把a替换成b

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a[100] = "1+2=;33-4=;236/7=;23*6";
	char b[100] = { 0 };
	char *s = strtok(a,";");
	while(s)
	{
		int i,j;
		char c;
		sscanf(s, "%d%c%d",&i,&c,&j);
		int res=0;
		switch(c)
		{
		case '+':
			res = i+j;
			break;
		case '-':
			res = i-j;
			break;
		case '*':
			res =i*j;
			break;
		case '/':
			res = i/j;
			break;
		default:
			res = 0;
		}
		char tmp[10] = { 0 };
		sprintf(tmp,"%d%s;",s,res);
		strcat(b,tmp);//追加
		s = strtok(NULL,";");
	}
	strcpy(a,b);//用b替换a
	printf("%s\n",a);
	return 0;
}