//�ļ�����del_blank2
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ����ɾ���ַ�����Ŀո�,������ȥ���ַ����м�Ŀո�
//˼  ·���������󿴣������ǿո�Ͱ��ұߵ��ַ�����Ϊ0

#include<stdio.h>

int main4()
{
	char a[100] = "hello   cate   ";
	int index = 0;
	
	while(a[index])
	{
		index++;
	}
	int i;
	for(i = index-1;i>=0;i--)
	{
		if (a[i] != ' ')
		{
			a[i+1] = 0;
			break;
		}
	}
	printf("(%s)\n",a);
	return 0;
}