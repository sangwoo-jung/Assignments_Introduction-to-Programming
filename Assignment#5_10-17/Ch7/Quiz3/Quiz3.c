// 음이 아닌 정수 n을 입력받아 n이 0이면 종료하고 n이 0이 아니면 1~n까지 홀수들과 짝수들의 역원들을 모두 더하라
// while, break 사용

#include <stdio.h>

int main(void)
{
    int n=0;

    while (1)
    {
        printf("n을 입력하시오: ");
        scanf("%d", &n);

        if ( n==0 )
            break;
        
        else 
        {
            int sum=0;
            int num=1;

            while (num<=n)
            {
                if (num%2!=0)
                    sum=sum+num;
                else
                    sum=sum+(-num);

                num++;
            }

            printf("%d", 1);
            int flag=2;
            while (flag<=n)
            {
                if (flag%2!=0)
                    printf("+%d", flag);
                else 
                    printf("-%d", flag);

                flag++;
            }
            
            printf("=%d", sum);

            printf("\n\n");
        }
    }

    return 0;
}