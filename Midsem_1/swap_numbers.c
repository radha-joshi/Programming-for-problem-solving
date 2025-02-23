// C program to swap two numbers without using a 3rd variable

#include <stdio.h>

int main ()
{
    int a, b;
    printf("\nEnter number 1:");
    scanf("%d", &a);
    printf("\n Enter number 2:");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b; 
    printf("\nNow number 1 is %d and number 2 is %d", a, b );
    return 0;
}