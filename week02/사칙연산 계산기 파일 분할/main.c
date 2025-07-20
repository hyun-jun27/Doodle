#include "week02.h"

int main()
{
    int a, b, x;
    char c;
    printf("첫 번째 정수 입력");
    scanf("%d", &a);

    printf("+, -, X, /");
    scanf(" %c", &c);

    printf("두 번째 정수 입력");
    scanf("%d", &b);

    if (c == '+')
    {
        x = plus(a, b);
        printf("%d", x);
    }

    else if (c == '-')
    {
        x = minus(a, b);
        printf("%d", x);
    }
    else if (c == 'X' || c == 'x')
    {
        x = mul(a, b);
        printf("%d", x);
    }
    else if (c == '/')
    {
        x = div(a, b);
        printf("%d", x);
    }
    else

        printf("false");
}
