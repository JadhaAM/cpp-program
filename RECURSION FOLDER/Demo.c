#include<stdio.h>
int Fun(int, int);
int main()
{
    int a, b;
    printf("Enter any numbers: ");
    scanf("%d %d", &a, &b);
    Fun(a,b);
}

int Fun(int a, int b)
{
    int s, k;
    s=a+b;
    printf("Sum of two numbers: %d\n", s);

    k=a*b;
    printf("Multiplication of two numbers: %d", k);
}
