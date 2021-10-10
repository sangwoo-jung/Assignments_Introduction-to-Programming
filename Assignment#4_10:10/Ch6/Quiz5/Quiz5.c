// Character를 하나 입력받아 대문자이면 "대문자", 소문자이면 "소문자", 숫자이면 "숫자", 그리고 그 외에는 "문자도 숫자도 아닙니다." 출력
// conditional operator 사용

#include <stdio.h>

int main(void)
{
    char ch='c';

    printf("Character를 입력하시오: ");
    scanf("%c", &ch);

    ( ch>='A' && ch<='Z' )?
    printf("대문자\n"):
    ( ch>='a' && ch<='z' )?
    printf("소문자\n"):
    ( ch>='0' && ch<='9' )?
    printf("숫자\n"):
    printf("문자도 숫자도 아닙니다.\n");

    return 0;
}