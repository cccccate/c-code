//�ļ�����_10_16
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ����ʮ����ת��Ϊʮ�����ƣ����õݹ�˼·��
//˼  ·����ʮ����ת���������ƣ�����Ҫ���ǵ�10-15Ҫ����ĸ��ʾ����������hen_char,ʵ�ִ˹���)
#include <stdio.h>

char hex_char(unsigned int n)
{
	switch (n)//ʹ��switch��һ���򵥵�ö�ٲ���
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
	int i = n % 16;//ȡ��
	if (n>=16)
		to_hex(n / 16);//ȡ��
	printf ("%c",hex_char(i));//��to_hex�����е���hex_char����
}

int main004()
{
	to_hex(44);
	return 0;
}