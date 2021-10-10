// 입력받은 달의 일수를 계산
// if else 사용

#include <stdio.h>

int main(void)
{
    int month=0;

    printf("달을 입력하시오: ");
    scanf("%d", &month);

    if (month==2)
        printf("%d월의 일수는 %d입니다.\n", month, 28);
    
    else if (month==4 || month==6 || month==9 || month==11)
        printf("%d월의 일수는 %d입니다.\n", month, 30);

    else
        printf("%d월의 일수는 %d입니다.\n", month, 31);

    return 0;
}