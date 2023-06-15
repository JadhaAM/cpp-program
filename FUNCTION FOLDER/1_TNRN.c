// TNRN -------- (Take Nothing Returns Nothing)
#include<stdio.h>

void Factorial()
{
    int fact=1, i, num;
    printf("Enter a number:");
    scanf("%d ",&num);
    for(i=1; i<=num; i++)
        fact = fact*i;
    printf("%d ", fact);
}

void swap()
{
    int a, b, temp;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a, &b);
    temp=a;
    a=b;
    b=temp;
    printf("%d ", a);
    printf("%d ",b);
}
 int main()
{
    int a;
    //Factorial();
    swap();
    Factorial();
}
