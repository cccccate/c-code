//�ļ�����strcat_strncat
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ����strcat�ַ���׷��strncat�ַ�������׷��
//��strcat��ʱ��Ҫע���һ���ַ���һ��Ҫ���㹻�Ŀռ�

#include<stdio.h>
#include<string.h>

int main()
{
	char a[10] = "abc";
	char b[100] = "hello123456";
	//strcat(a,b);//��a��b�ϲ�Ϊһ���ַ������������a
	strncat(a,b,5);//Ҫ��֤����Ĳ���С��a�Ŀռ�
	printf("%s\n",a);
	return 0;
}