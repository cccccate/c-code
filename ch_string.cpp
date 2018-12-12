//文件名：ch_string
//作  者：ccate
//时  间：2018.12
//描  述：汉字字符串逆置
//思  路：在UTF8模式下，一个汉字占用3个字节（BYTE）；
//        在GBK下，2个BYTE（windows默认GBK）；
//        一个汉字的第一个字节总是小于0的一个整数;
//        以3个字节为单位进行交换（1->倒3；2->倒2；3->倒1）才能达到汉字字符串的逆置


#include<stdio.h>

int main()
{
	char a[100] = "一颗修行千年的葱";
	int min = 0;
	int max = 0;

	while(a[max+1])
	{
		max++;
	}
	char tmp;
	while (min<max)
	{
		//GBK模式下
		tmp = a[min];
		a[min] = a[max-1];
		a[max-1] = tmp;//交换首尾两汉字的第一个字节

		tmp = a[min+1];
		a[min+1] = a[max];
		a[max] = tmp;//交换首尾两汉字的第二个字节

		max -= 2;
		min += 2;
		
		/*//UTF8模式下
		tmp = a[min];
		a[min] = a[max-2];
		a[max-2] = tmp;//交换首尾两汉字的第一个字节

		tmp = a[min+1];
		a[min+1] = a[max-1];
		a[max-1] = tmp;//交换首尾两汉字的第二个字节

		tmp = a[min+2];
		a[min+2] = a[max];
		a[max] = tmp;//交换首尾两汉字的第三个字节

		max -= 3;
		min += 3;
		*/
	}
	printf("%s\n", a);

	/*
	char a[100] = "一颗修行千年的葱";
	char b[100] = "abc";
	int i;
	for (i=0;i<20;i++)
	{
		printf("%d\n", a[i]);
		//printf("%d\n", b[i]);
	}
	*/
	return 0;
}