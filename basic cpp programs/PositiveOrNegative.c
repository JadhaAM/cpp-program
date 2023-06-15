// Write a program whether a given number is positive or non positive

#include<stdio.h>
int main()
{
    int i;
    printf("To check given number is positive or negative");
    printf("\nEnter your value: ");
    scanf("%d", &i);

    if(i<0)
    {
        
        printf("Given number is Non Positive..!!");   //0 is not a negative number
    }
    else
    {
        printf("Given number is Positive..!!");
    }
}


