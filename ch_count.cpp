//�ļ�����ch_count
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ����ͳ���ַ����к��ֵ�����
//˼  ·����������3/2������ASCII���ʾ��ͳ������/3��2

#include<stdio.h>

int main()
{
	char a[100] = "��cate��a��";

	int tmp = 0;
	int index = 0;

	while(a[index])
	{
		if(a[index]<0)
		{
			tmp++;
		}
		index++;
	}

	printf("���ֵ�����Ϊ%d",tmp/2);
	return 0;
}