// 1~100까지의 수중 3, 5, 7의 배수를 제외한 나머지 수들을 한 행에 10개씩 출력하라
// for 사용, continue 사용

#include <stdio.h>

int main(void)
{
    int count=0;    // # of columns

    for (int i=1; i<=100; i++)
    {
        if ( i%3!=0 && i%5!=0 && i%7!=0 )
        {    
            if ( count<=9 )
            {    
                printf("%2d ", i);
                count++;
            }

            else 
            {
                printf("\n%2d ", i);
                count=1;
            }
        }

        else 
            continue;
    }

    printf("\n");

    return 0;
}