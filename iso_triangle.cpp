// �ļ�����iso_triangle
// ��  �ߣ�ccate
// ʱ  �䣺2018.12
// ��  ����ѭ��Ƕ��-������������Σ����������num�������������εĴ�С��

#include <stdio.h>

int main()
{
	int c,b,num;
	scanf("%d",&num);

	for(c=1;c<num;c++) //���ѭ�����������δ�С
	{
		for (b=0;b<num-c;b++) //�ڲ�ѭ������ÿ�пո������
		{
			printf(" ");
		}
		for (b=0;b<2*c-1;b++) //�ڲ�ѭ������ÿ��*������
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}