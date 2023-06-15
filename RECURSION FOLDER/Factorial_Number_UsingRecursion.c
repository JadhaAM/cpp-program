// To calculate factorial of number using Recursion
#include<stdio.h>


int Factorial(int number)
{
    if(number == 0 || number == 1)
       return 1;
    else
       return(number * Factorial(number - 1));
}
 int main()
 {
     int num;
     printf("Enter any number: ");
     scanf("%d", &num);
     printf("The factorial of %d is %d", num, Factorial(num));
     return 0;
 }