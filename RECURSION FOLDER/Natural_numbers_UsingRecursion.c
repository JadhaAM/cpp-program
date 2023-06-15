#include<stdio.h>

int NaturalNumbers(int);

int main()
{
    int n;
    printf("The first Natural Numbers are: \n");
    NaturalNumbers(n);
}

int NaturalNumbers(int n)
{
    if(n<=46)
    {
        printf("%d ",n);
        NaturalNumbers(n+1);
    }
}