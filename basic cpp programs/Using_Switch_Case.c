// Write a program which takes month as an input from user, and display number of days in that month
#include<stdio.h>
void main()
{
    int a;
    printf("Enter the month number: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Month january \n Days 31");
        break;
    case 2:
        printf("Month February \n Days 28");
        break;
    case 3:
        printf("Month March \n Days 31");
        break;
    case 4:
        printf("Month April \n Days 30");
        break;
    case 5:
        printf("Month May \n Days 31");
        break;
    case 6:
        printf("Month June \n Days 30");
        break;
    case 7:
        printf("Month Jully \n Days 31");
        break;
    case 8:
        printf("Month August \n Days 31");
        break;
    case 9:
        printf("Month September \n Days 30");
        break;
    case 10:
        printf("Month October \n Days 31");
        break;
    case 11:
        printf("Month November \n Days 30");
        break;
    case 12:
        printf("Month December \n Days 31");
        break;    
    default:
        printf("Invalid Month number....");
    }
}

// ----------- ONLY PRINT DAYS ------------ //
/*{
    int month;
    printf("Enter a number of month: ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf(" '31' Days in this month ");
        break;
    case 2:
        printf(" '28/29' Days in this month");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf(" '30' Days in this month");
        break;
    default:
        printf("Invalid month number......!!!!!");
        break;
    }
}*/