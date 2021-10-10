// 어떤 점의 x좌표 와 y좌표를 각각 받아 그 점이 몇 사분면에 속하는지 판단
// conditional operator 사용

#include <stdio.h>

int main(void)
{
    int x, y=0;

    printf("x좌표를 입력하시오: ");
    scanf("%d", &x);
    printf("y좌표를 입력하시오: ");
    scanf("%d", &y);

    ( x>0 && y>0 )?
    printf("제1 사분면\n"):
    ( x<0 && y>0 )?
    printf("제2 사분면\n"):
    ( x<0 && y<0 )?
    printf("제3 사분면\n"):
    ( x>0 && y<0 )?
    printf("제4 사분면\n"):
    printf("None");

    return 0;
}