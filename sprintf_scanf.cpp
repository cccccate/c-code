//�ļ�����sprintf_sscanf
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ����printf�����׼����豸���һ���ַ���
//        sprintf����һ��char���������һ���ַ�������printf�÷�����һ�£����˵�һ������)

#include<stdio.h>

int main01()
{
	char a[100];
	int i = 100;
	sprintf(a,"%s%d%x","hello world",i,i);//������䵽a�������a��ֵ
	printf("%s\n",a);
	return 0;
}

int main02()
{
	char a[100] = "56+72";
	int i;
	int j;
	sscanf(a,"%d+%d",&i,&j);
	printf("%d +%d = %d\n",i,j,i+j);
	return 0;
}