// 입력받은 연도가 윤년인지 아닌지 판단

#include <stdio.h>

int main(void)
{
    int year=0;

    printf("연도를 입력하시오: ");
    scanf("%d", &year);

    if ((year%4==0 && year%100!=0) || (year%400==0))
        printf("%d년은 윤년입니다.\n", year);
    else
        printf("%d년은 윤년이 아닙니다.\n", year);

    return 0;
}