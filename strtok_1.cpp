//�ļ�����_strtok
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ����strtok�����ַ��ָ���Ӵ�

#include<stdio.h>
#include <string.h>

int main01()
{
	char a[100] = "123_abcjjj_dwhdojj_756747";
	char *s;//����һ��char���͵�ָ�����

	s = strtok(a,"_");//������_�ָ���Ӵ�
	printf("%s\n",s);//���Ϊ123��ֻ�ѵ�һ��_��ǰ����ַ�����ȡ������

	s = strtok(NULL,"_");//�ڶ��ε��õ�ʱ���һ������д��
	printf("%s\n",s);//���Ϊabcjjj

	s = strtok(NULL,"_");//�����ε���
	printf("%s\n",s);//���Ϊdwhdojj

	s = strtok(NULL,"_");//���Ĵε���
	printf("%s\n",s);//���Ϊ756747

	s = strtok(NULL,"_");//����ε���
	printf("%s\n",s);//���Ϊ(null)�����strtok�Ѿ������ַ�����β���������÷���NULL
	return 0;
}
//����д�����ڸ��ӷ��������������

int main()
{
	char a[100] = "123_abcjjj_dwhdojj_756747";
	char *s;//����һ��char���͵�ָ�����
	s = strtok(a,"_");//������_�ָ���Ӵ�
	while(s)
	{
		printf("%s\n",s);
		s = strtok(NULL,"_");
	}

	return 0;
}