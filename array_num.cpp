//�ļ�����array_num
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  �����������Ԫ��

# include <stdio.h>

int main()
{
	int a[] = {1,234,432,4,56,23,49};
	printf("%d, %d\n",sizeof(a),sizeof(a[0]));
	int i;
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}