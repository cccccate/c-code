/*******************
* �ļ�����sum_nal
* ���ߣ�ccate
* ʱ�䣺2018.12
* ��������Ȼ�����
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
        --a;//�˴�--a��a--Ч��һ��
    }
    printf("%d\n",sum);
    return 0;
}

