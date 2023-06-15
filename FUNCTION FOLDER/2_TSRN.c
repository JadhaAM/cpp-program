// TSRN----(Take Something Return Nothing)

#include<stdio.h>
void add(int, int);
void add(int a, int b)                //formal Arguments
{
    int c;
    c=a+b;
    printf("sum is %d", c);
}

void isEven(int a)
{
    int d;
    scanf("\n%d",&d);
    if(a%2==0)
     printf("\nEven...\n");
    else
     printf("\nodd...\n");
    
    add(a, d);
}

void isPrime(int k)
{
    int a;
    for(a=2; a<k; a++)
    if(k%a==0)
      break;
    if(k==a)
        printf("\nPrime....\n");
    else 
        printf("\nNot Prime....\n");
}

void main()
{
    void add(int , int);
    int x, y;
    scanf("%d %d", &x, &y);
    isPrime(y);
    add(x, y);                      //Actual arguments      call by value
    isEven(x);
}