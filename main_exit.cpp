//�ļ�����main_exit
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ����exit��c���ԵĿ⺯����Ҫ����stdlib.h��ͷ�ļ�����һ�����͵Ĳ��������������ֹ
//return:
//�ں�����дreturnֻ�Ǵ�������ֹ�ˣ������ڳ�����κ�λ�õ���exit����ô���̾�������ֹ��
//��main������ִ��return��䣬������ֹ�������Ӻ�����ִ��returnֻ���Ӻ�����ֹ�ˣ�����main����û����ֹ
//exit:
//�ڳ������κβ�λ(�����Ӻ���������exit��������ֹ��

#include<stdio.h>
#include<stdlib.h>

void test5()
{
	return;
	printf("test\n");//return�󣬲��ᱻִ��
}
int main()
{
	//exit(0);//һ��д0����������ֹ
	printf("main\n");//ִ��
	return 0;
	printf("hello\n");//����ִ��
}