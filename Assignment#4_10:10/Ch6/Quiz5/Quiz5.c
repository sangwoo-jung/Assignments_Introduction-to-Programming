// Character를 하나 입력받아 대문자이면 "대문자", 소문자이면 "소문자", 숫자이면 "숫자", 그리고 그 외에는 "문자도 숫자도 아닙니다." 출력
// if else 사용

#include <stdio.h>

int main(void)
{
    char ch='c';

    printf("Character를 입력하시오: ");
    scanf("%c", &ch);

    if ( ch>='A' && ch<='Z' )
        printf("대문자\n");
    else if ( ch>='a' && ch<='z' )
        printf("소문자\n");
    else if ( ch>='0' && ch<='9' )
        printf("숫자\n");
    else 
        printf("문자도 숫자도 아닙니다.\n");

    return 0;
}