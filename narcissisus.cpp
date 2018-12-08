// 文件名：narcissisus
// 作  者：ccate
// 时  间：2018.12
// 描  述：求100-999之间的所有水仙花数
// 水仙花数：例153=1^3+5^3+3^3

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