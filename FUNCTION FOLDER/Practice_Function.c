/* 👇🏻👇🏻👇🏻
Write a program in c to find the sqare of any number
using function */

#include<stdio.h>
/*void Square(int a)
{
    printf("Enter a value: ");
    scanf("%d",&a);
    printf("Square of %d is : %d", a, a*a);
}

void main()
{
    int a;
    Square(a);
}*/



//👉🏻👉🏻👉🏻Swapping two numbers
void swapping(int a, int b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
    printf("\nAfter swapping: %d %d",a,b);
}

void main(int a, int b)
{
    printf("The first number: ");
    scanf("%d",&a);
    printf("The second number is: ");
    scanf("%d",&b);
    printf("Before Swapping; %d %d", a, b);
    swapping(a,b);
}



//👉🏻👉🏻👉🏻 to check number is perfect or not
/*int isPerfect()
{
    int i, num, rem, sum=0;
    for(i=1; i<num; i++)
    {
        rem=num%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
}


int main()
{
    int sum, num;
    printf("Enter a number: ");
    scanf("%d",&num);
    isPerfect(num);
    if(sum==num)
        printf("%d is a perfect number..",num);
    else
        printf("%d is not a perfect number..",num);
}*/


// 👉🏻👉🏻 Write a c program using function cube of a number 👈🏻👈🏻 //

/*void Cube(int a)
{
    printf("enter a number: ");
    scanf("%d ", &a);
    printf("Cube of %d is: %d", a, a*a*a);
}

void main()
{
    int a;
    Cube(a);
}*/