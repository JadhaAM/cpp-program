// Write a pragram to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int i, n;
    int s=0;
    printf("Enter N number: ");
    scanf("%d",&n);
    /*for ( i=1; i<=n; i++)          ulso used [*/for(i=1,s=0; i<=n; s=s+i,i++); //then we can skip next line
        //s=s+i;
        printf(" Sum is %d ",s);
}

