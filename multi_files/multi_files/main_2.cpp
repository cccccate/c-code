//�ļ�����multi_files
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  �������ļ�������α����ظ�����
//��.h�ļ�������ifndef


#include <stdio.h>
#include "multi.h"//˫���ű�ʾ��ǰĿ¼��
#include "multi.h"
#include "multi.h"

//#define TEST  //�궨��

int main()
{
	/*
	#ifdef TEST  //���������TEST����꣬�ͱ�������Ĵ��룬ifdef��ͷendif��β
	printf("hello\n");
	#endif

	#ifndef TEST //���û�ж���TEST����꣬�ͱ�������Ĵ���,ifndef��ͷendif��β
	printf("world\n");
	#endif
	*/

	int a =10, b=20;
	printf("%d\n",max001(a,b));
	printf("%d\n",add001(a,b));
	return 0;
}