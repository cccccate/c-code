//�ļ�����strchr_strstr
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ����strchr��ָ�����ַ�������ָ�����ַ�
//        strstr��ָ�����ַ�������ָ�����ַ���

#include<stdio.h>
#include <string.h>

int main()
{
	char a[100] = "hello world";
	char *s;
	char *m;
	s = strchr(a,'l');//����l��ͷ���ַ���
	if(s != NULL)
		printf("%s\n",s);//�����llo world

	m = strstr(a,'wo');//����wo��ͷ���ַ���
		if(m != NULL)
		printf("%s\n",m);//�����world
	return 0;
}