//�ļ�����strcpy_strncpy
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  �����ַ����������ַ������޿���
//ע��aҪ�ܷŵ���b

#include<stdio.h>
#include<string.h>

int main()
{
	char a[100] = "abc";
	char b[100] = "1234";
	//�ַ�����������b�����ݿ�����a����
	/*
	int index = 0;
	while(b[index])
	{
		a[index] = b[index];
		index++;
	}
	*/
	//strcpy(a, b);
	strncpy(a,b,sizeof(a) - 1);//ע���β��0���������ܸ���a�Ĵ�С������ַ�����
	printf("%s\n",a);
	return 0;
}