// 👉🏻👉🏻 Write a c program to print Fabonacci series using Recursion 👈🏻👈🏻

#include<stdio.h>

/*int terms;
int Fabonacci(int prNo, int num);

int main()
{
     static int prNo=0, num=1;
    printf("Enter number of terms for the series(<20): ");
    scanf("%d",&terms);
    printf("1 ");
    Fabonacci(prNo, num);
}


int Fabonacci(int prNo, int num)
{
    static int i=1, nxtNo;
    if(i==terms)
       return 0;
    else
    {
        nxtNo = prNo + num;
        prNo = num;
        num = nxtNo;
        printf("%d ",nxtNo);

        i++;
        Fabonacci(prNo, num);  
    }
    return 0;
}*/


int n;
int fab(int p, int a);
 
int main()
{
    static int p=0, a=1;
    printf("Enter number for series: ");
    scanf("%d",&n);
    printf("1 ");
    fab(p, a);
}

int fab(int p, int a)
{
    static int b=1, N;
    if(b==n)
       return 0;
    else
    {
        N= p+a;
        p=a;
        a=N;
        printf("%d ",N);

        b++;
        fab(p, a);
    }
    return 0;
}