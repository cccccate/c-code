// �ļ�����narcissisus
// ��  �ߣ�ccate
// ʱ  �䣺2018.12
// ��  ������100-999֮�������ˮ�ɻ���
// ˮ�ɻ�������153=1^3+5^3+3^3

#include <stdio.h>

int main()
{
	int a;
	for (a=100; a<1000;a++)
	{
		int a1;
		int a2;
		int a3;

		a1 = a/100;
		a2 = (a%100)/10;
		a3 = a%10;

		if (a1*a1*a1+a2*a2*a2+a3*a3*a3 == a)
			printf("%d\n",a);
	}
	return 0;
}