// C program to declare an array and show sum of elements of an array

#include <stdio.h>
int main()
 {
    int number[10] = {};
    int i, sum = 0;
    for (i=0; i<10; i++)
    {
        printf("\nEnter the no. for index %d of array :", i);
        scanf("%d", &number[i]);
    }
    for (i=0 ; i<10 ; i++ )
    {
        sum = sum + number[i];
    }
    printf("\nSum is %d", sum);
    return(0);
 }