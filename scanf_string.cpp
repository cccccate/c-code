//�ļ�����scanf_string
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ������scanf����һ���ַ���

#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	char a[100] = {0};  //����һ������ͬʱ�ѳ�Ա��ʼ��Ϊ0��һ����ϰ��
	scanf("%s",a);  //scanf�����������Σ��

	char b[100] = {0};
	scanf("%s",b);

	char c[100] = {0};

	int index_a = 0;
	while(a[index_a])
	{
		c[index_a] = a[index_a];
		index_a++;
	}

	int index_b = 0;
	while(b[index_b])
	{
		c[index_a+index_b] = b[index_b];
		index_b++;
	}

	printf("%s\n",c);
	return 0;
}