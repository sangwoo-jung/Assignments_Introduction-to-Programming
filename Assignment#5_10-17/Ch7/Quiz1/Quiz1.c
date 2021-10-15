// 구구단 출력 

#include <stdio.h>

int main(void)
{
    int num=0;
    int flag=0;     // flag 1~9

    printf("몇 단을 출력할까요?: ");        // num 1~9
    scanf("%d", &num);

    flag=1;

    while ( flag<10 )
    {   
        printf("%d*%d=%d\n", num, flag, num*flag);
        flag++;
    }

    return 0;
}