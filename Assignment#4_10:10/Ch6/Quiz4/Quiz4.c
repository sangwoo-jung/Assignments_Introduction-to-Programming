// 하나의 문자를 입력받아서 모음인지 자음인지 구분
// if else 사용

#include <stdio.h>

int main(void)
{
    char letter='c';

    printf("문자를 입력하시오: ");
    scanf("%c", &letter);

    if ( letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u' )
        printf("모음입니다.\n");
    else
        printf("자음입니다.\n");

    return 0;
}