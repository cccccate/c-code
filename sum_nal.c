/*******************
* 文件名：sum_nal
* 作者：ccate
* 时间：2018.12
* 描述：自然数求和
*******************/

#include <stdio.h>

int main()
{
    int a = 0;
    int sum = 0;
    scanf("%d",&a);
    while(a>0)
    {
        sum+=a;
        --a;//此处--a与a--效果一样
    }
    printf("%d\n",sum);
    return 0;
}

