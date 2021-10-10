// 나이와 현재 시각을 차례로 입력받아 자유이용권의 가격을 출력

#include <stdio.h>

int main(void)
{
    int age, time=0;
    int price=0;

    printf("나이를 입력하시오: ");
    scanf("%d", &age);
    printf("현재 시각을 입력하시오: ");
    scanf("%d", &time);

    if (time<17)
    {
        if (age>12 && age<65)
            price=34000;
        else 
            price=25000;
    }
    else
        price=10000;

    printf("요금은 %d입니다.", price);
    
    return 0;
}