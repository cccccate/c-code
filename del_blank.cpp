//�ļ�����del_blank
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ����ɾ���ַ�����Ŀո�"hello     "->"hello"

#include<stdio.h>

int main3()
{
	char a[] = "hello     ";
	int index = 0;
	while (a[index])
	{
		if (a[index] == ' ')
		{
			a[index] = 0;
			break;
		}
		index++;
	}
	printf("(%s\n)",a);
	return 0;
}