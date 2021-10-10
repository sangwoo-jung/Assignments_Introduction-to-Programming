// int 정수를 입력받아 2의 보수로 변환

#include <stdio.h>

int main(void)
{
    int num, com_num=0;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    printf("입력 값(10진수): %d\n", num);
    printf("입력 값(16진수): %08x\n", num);

    com_num=(~num)+1;

    printf("2의 보수(10진수): %d\n", com_num);
    printf("2의 보수(16진수): %08x\n", com_num);

    return 0;
}