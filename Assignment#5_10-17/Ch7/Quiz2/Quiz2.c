// 1~100까지의 수중 3, 5, 7의 배수를 제외한 나머지 수들을 한 행에 10개씩 출력하라
// for 사용, continue 사용하지 말고

#include <stdio.h>

int main(void)
{
    int i=1;
    int count=0;    // # of columns

    while ( i<=100 )
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

        i++;
    }

    printf("\n");

    return 0;
}