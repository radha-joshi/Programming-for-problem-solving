// C program to show day of the week
#include <stdio.h>

int main()
{
    int day;
    printf("\n Enter any number betn 1 to 7 : ");
    scanf("%d", &day);

    switch (day)
    {
        case 1:
            printf("\n IT IS SUNDAY");
            break;

        case 2:
            printf("\n IT IS MONDAY");
            break;

        case 3:
            printf("\n IT IS TUESDAY");
            break;

        case 4:
            printf("\n IT IS WEDNESDAY");
            break;

        case 5:
            printf("\n IT IS THURSDAY");
            break;

        case 6:
            printf("\n IT IS FRIDAY");
            break;

        case 7:
            printf("\n IT IS SATURDAY");
            break;

        default:
            printf("\n invalid input");
            break;
    }

    return(0);
}