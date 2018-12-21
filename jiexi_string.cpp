//文件名：jiexi_string
//作  者：ccate
//时  间：2018.12
//描  述：解析字符串,给出字符串"43*56="，提取43，*，56并输出43*56的值

#include<stdio.h>

int main()
{
	char a[100] = "43*56=";
	int i,j;
	char c;
	sscanf(a,"%d%c%d=",&i,&c,&j);//从字符串里面把想得到的字符或者整数提取出来
	//printf("%d, %c, %d\n",i,c,j);
	int res = 0;
	switch(c)
	{
	case '+':
		res = i+j;
		break;
	case '-':
		res = i-j;
		break;
	case '*':
		res = i*j;
		break;
	case '/':
		res = i/j;
		break;
	default:
		res = 0;
	}
	sprintf(a, "%d%c%d=%d",i,c,j,res);
	printf("%s\n",a);

	return 0;
}
