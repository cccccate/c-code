//�ļ�����array2_init_def2
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ������ά����Ķ���ͳ�ʼ��
#include <stdio.h>

int main10()
{
	int a2[][3] = {{1,2,3},{34.52,12},{12,5,0}};  

	int i,j;

		for (i=0;i<sizeof(a2)/sizeof(a2[0]);i++)  //����һ����ά���飬��������ÿ����Ա���
	{
		for (j=0;j<sizeof(a2[0])/sizeof(a2[0][0]);j++)
		{
			printf("a2[%d][%d]=%d\n",i,j,a2[i][j]);
		}
	}
	return 0;
}
