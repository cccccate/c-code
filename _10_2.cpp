//�ļ�����_10_2
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ����ʮ����ת��Ϊ�����ƣ����õݹ�˼·��

#include <stdio.h>

void to_bin(unsigned int n)
{
	int i = n % 2;//ȡ��
	//printf ("%d\n",i);
	if (n>=2)
		to_bin(n / 2);//ȡ��
	printf ("%d",i);//ֻ��ı�printf��λ�þͿ��Ըı����˳��
}

int main003()
{
	to_bin(10);
	return 0;
}
