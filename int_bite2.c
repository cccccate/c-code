/*******************
* �ļ�����
* ���ߣ�
* ʱ�䣺
* ������
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
        printf("��\n");
        break;
    case 2:
        printf("ʮ\n");
        break;
    case 3:
        printf("��\n");
        break;
    case 4:
        printf("ǧ\n");
        break;
    }
    return 0;
}
