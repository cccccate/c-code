//�ļ�����jiexi_string2
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ���������ַ���������"1+2=;33-4=;236/7=;23*6"��ÿһ����ֵ�����
//˼  ·����������strtok����������ÿһ����ʽ���
//        Ȼ�����ÿ����ʽ��ֵ�������ͬһ�У�
//        �½���b������strcat��ÿ����ʽ׷�ӵ�b��
//        �����strcpy��a�滻��b

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a[100] = "1+2=;33-4=;236/7=;23*6";
	char b[100] = { 0 };
	char *s = strtok(a,";");
	while(s)
	{
		int i,j;
		char c;
		sscanf(s, "%d%c%d",&i,&c,&j);
		int res=0;
		switch(c)
		{
		case '+':
			res = i+j;
			break;
		case '-':
			res = i-j;
			break;
		case '*':
			res =i*j;
			break;
		case '/':
			res = i/j;
			break;
		default:
			res = 0;
		}
		char tmp[10] = { 0 };
		sprintf(tmp,"%d%s;",s,res);
		strcat(b,tmp);//׷��
		s = strtok(NULL,";");
	}
	strcpy(a,b);//��b�滻a
	printf("%s\n",a);
	return 0;
}