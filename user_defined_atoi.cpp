//�ļ�����user_defined_atoi
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  �����Զ��庯��ʵ��Сдת��Ϊ��д����дת����Сд�Ĺ���

#include<stdio.h>

/*
int main()
{
	char a = 'a' - ' ';//aת��ΪA����һ���ո�
	char b = 'A';
	printf("%d,%d\n",a,b);//a��ASCII����97��A��ASCII����65����32��һ���ո�
	printf("a=%c\n",a);
	return 0;
}
*/

char trans(char c)
{
	if(c >= 'a' && c <= 'z')
		return c - ' ';
	if(c >= 'A' && c <= 'Z')
		return c + ' ';
}

int main()
{
	char a = 'r';
	printf("%c\n",trans(a));

	char b = 'B';
	printf("%c\n",trans(b));
	return 0;
}
