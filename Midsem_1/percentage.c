// C program for percentage of 5 subjects
#include <stdio.h>

int main()
{
    float sub, total=0, percentage;
    int i;
    for (i=1; i<6; i++)
    {
        printf("Enter marks for subject %d :", i);
        scanf("%f", &sub);
        total = total +sub;
    }
    percentage = (total/500)*100;
    printf("Your Percentage is %f", percentage);
    return(0);
} 