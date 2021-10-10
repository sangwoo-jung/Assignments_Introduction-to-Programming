// 입력받은 달의 일수를 계산
// switch 사용

#include <stdio.h>

int main(void)
{
    int month=0;

    printf("달을 입력하시오: ");
    scanf("%d", &month);

    switch (month)
    {
        case 2:
            printf("%d월의 일수는 %d입니다.\n", month, 28);
            break;
        
        case 4:
        case 6:
        case 9:
        case 11:
            printf("%d월의 일수는 %d입니다\n", month, 30);
            break;

        default:
            printf("%d월의 일수는 %d입니다.\n", month, 31);
    }

    return 0;
}