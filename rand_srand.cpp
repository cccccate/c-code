//�ļ�����rand_srand
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ����rand:�������srand�����������
//����ͷ�ļ�#include<stdlib.h>

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//�������ʱ�Ӳ�ͣ�ı�
//#include<time.h> time������c���ԵĿ⺯���������ǵõ�ϵͳ��ǰʱ��

int main5()
{
	int a;
	int i;
	unsigned int tm = time(NULL);
	srand(tm);  //ֻҪ���Ӳ�ͬ��rand���������ˮ�Ͳ�ͬ�����������ͬ��rand�������������һ��
	for (i=0;i<100;i++)
	{
		a=rand()%101;//����0-100�������
		printf("%d\n",a);
	}
	return 0;
}
