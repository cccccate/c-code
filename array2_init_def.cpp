//�ļ�����array2_init_def
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ������ά����Ķ���ͳ�ʼ��

#include <stdio.h>

int main9()
{
	int a2[2][10];  //a2��ά���飬����a2[0]��a2[1]����һά���飨ÿ��������10��Ԫ�أ�
	
	int i,j;
	int index = 0;
	for (i=0;i<2;i++)  //����һ����ά���飬��������ÿ����Ա��ֵ
	{
		for (j=0;j<10;j++)
		{
			a2[i][j] = index++;
		}
	}
		for (i=0;i<2;i++)  //����һ����ά���飬��������ÿ����Ա���
	{
		for (j=0;j<10;j++)
		{
			printf("a2[%d][%d]=%d\n",i,j,a2[i][j]);
		}
	}
	printf("%u, %u, %u\n", sizeof(a2),sizeof(a2[0]),sizeof(a2[0][0]));
	return 0;
}
