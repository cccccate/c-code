//�ļ�����strcmp_strncmp
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  �����Ƚ������ַ����Ƿ���ͬ
//strncmp����ָ���Ƚϵ��ַ���ǰ����

#include<stdio.h>
#include<string.h>

int main()
{
	char a[100] = "abc";
	char b[100] = "abcd";
	if(a == b)  //����ͨ�����ַ�ʽ�Ƚ������ַ����Ƿ���ͬ
	{
		;
	}
	//if(strcmp(a,b) == 0)  //�Ƚ�ab�Ƿ���ͬ
	if(strncmp(a,b,4) == 0)  //strncmp����ָ���Ƚϵ��ַ��м���
	{
		printf("��ͬ\n");
	}
	else
	{
		printf("����ͬ\n");
	}
	return 0;
}
