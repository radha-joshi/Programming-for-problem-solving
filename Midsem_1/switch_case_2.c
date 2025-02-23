// C program for arithmetic operations using switch case

#include <stdio.h>
int main()
{
    int operation, a=10, b=20, c;
    printf("\n For addition use 1");
    printf("\n For Subtraction use 2");
    printf("\n For multiplication use 3");
    printf("\n For division use 4");
    printf("\n For mod use 5");
    printf("\n Enter your number now :");
    scanf("%d", &operation);

    switch (operation)
    {
        case 1:
            printf("%d + %d = %d", a, b, a+b);
            break;
        case 2:
            printf("%d +%d = %d", a, b, a-b);
            break;
        case 3:
            printf("%d * %d = %d", a, b, a*b);
            break;
        case 4:
            printf("%d / %d = %d", a, b, a/b);
            break;
        case 5:
            printf("%d %% %d = %f", a, b, a%b);
            break;
        default:
            printf("input invalid");
            break;
    }
    return(0);
}