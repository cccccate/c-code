/*******************
* 文件名：
* 作者：
* 时间：
* 描述：
*******************/
#include<stdio.h>

int main()
{
    int a;
    int sum = 0;
    scanf("%d", &a);
    while(a>0)
    {
        ++sum;
        a /= 10;
    }
    switch(sum)
    {
    case 1:
        printf("个\n");
        break;
    case 2:
        printf("十\n");
        break;
    case 3:
        printf("百\n");
        break;
    case 4:
        printf("千\n");
        break;
    }
    return 0;
}
