//�ļ�����jiexi_string
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ���������ַ���,�����ַ���"43*56="����ȡ43��*��56�����43*56��ֵ

#include<stdio.h>

int main()
{
	char a[100] = "43*56=";
	int i,j;
	char c;
	sscanf(a,"%d%c%d=",&i,&c,&j);
	//printf("%d, %c, %d\n",i,c,j);
	int res = 0;
	switch(c)
	{
	case '+':
		res = i+j;
		break;
	case '-':
		res = i-j;
		break;
	case '*':
		res = i*j;
		break;
	case '/':
		res = i/j;
		break;
	default:
		res = 0;
	}
	sprintf(a, "%d%c%d=%d",i,c,j,res);
	printf("%s\n",a);

	return 0;
}