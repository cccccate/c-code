//文件名：_10_16
//作  者：ccate
//时  间：2018.12
//描  述：十进制转化为十六进制（运用递归思路）
//思  路：与十进制转二进制类似，但是要考虑到10-15要以字母表示（新增函数hen_char,实现此功能)
#include <stdio.h>

char hex_char(unsigned int n)
{
	switch (n)//使用switch做一个简单的枚举操作
	{
	case 0:
		return '0';
	case 1:
		return '1';
	case 2:
		return '2';
	case 3:
		return '3';
	case 4:
		return '4';
	case 5:
		return '5';
	case 6:
		return '6';
	case 7:
		return '7';
	case 8:
		return '8';
	case 9:
		return '9';
	case 10:
		return 'a';
	case 11:
		return 'b';
	case 12:
		return 'c';
	case 13:
		return 'd';
	case 14:
		return 'e';
	case 15:
		return 'f';
	}
	return '0';
}

void to_hex(unsigned int n)
{
	int i = n % 16;//取余
	if (n>=16)
		to_hex(n / 16);//取整
	printf ("%c",hex_char(i));//在to_hex函数中调用hex_char函数
}

int main004()
{
	to_hex(44);
	return 0;
}