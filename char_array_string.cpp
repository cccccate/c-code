//�ļ�����char_array_string
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  �����ַ��������ʼ��

#include<stdio.h>

int main01()
{
	//char a[4];  //�����ʼ��1
	//a[0]='a';
	//a[1]='b';
	//a[2]='c';
	//a[3]='\0';
	//char a[10] = {'a','b','c'};//�����ʼ��2
	char a[] = "abc";//�����ʼ��3�����
	//char a[10] = { 0 };//��ʼ��Ϊ0-1
	//char a[10] = "";//��ʼ��Ϊ0-2
	printf("%s\n",a);

	int i;
	for (i=0; i<sizeof(a); i++)
	{
		printf("a[%d]=%d\n",i,a[i]);//���97,98,99,0������ASCII��
	}
	return 0;
}