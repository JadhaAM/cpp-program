 
// TSRS ----------- (Take Something Return Something)
// Return something means void() function cant be used

#include<stdio.h>

int Pattern(int i, int j)       // Formal Arguments
{
    for(i=1; i<=5; i++)
    {
        for (j=1; j<=5; j++)
        {
           if(j<=i)
              printf("* ");
           else
              printf(" ");
        }
        printf("\n");
    }
}

float Area(float r)         // Area of circle
{
    float A, a=3.14;
    A=a*r*r;
   // Pattern(6,6);            // Actual arguments 
    return A;
}


int Sub(int a, int b)       // Substraction
{
    int c;
    c=a-b;
    return c;
}

int isPrime(int a)     // to check Prime or not
{
    int i;
    for(i=2; i<a; i++)
       if(i%a==0)
          return 0;
    return 1;
}

int PrintPrimeNumbers(int x, int y)
{
    int a;
    for(a=x; a<=y; a++)
       if(isPrime(a))
          printf("%d ",a);
}


int main()
{
    int a, b, s,k,n,o;
    float m;

    Pattern(5,5);
    m= Area(6);
    printf("Area of Circle: %f", m);

    printf("\nEnter a numbers:");
    scanf("%d %d",&a,&b);
    s=Sub(a,b);

    printf("Sub is: %d",s);

    printf("Enter a no.:- ");
    scanf("%d %d",&n, &o);
    PrintPrimeNumbers(n,o);
   
    scanf("%d",&k);
    if(isPrime(a))
       printf("Prime...");
    else
       printf("Not Prime..");

}