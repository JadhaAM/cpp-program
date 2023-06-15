// Weite a program to print first n terms in the series: 1, 3, 6, 10, 15.....
#include<stdio.h>
int main()
{
    int i, s=0, n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)  
    printf("%d ",s=s+i);
    
}


// Write a program to print first n terms in the series: 2, 5, 10, 17,....

/*{
    int i, s, n;
    printf("Enter a number: ");
    scanf("%d ", &n);

    for(i=1; i<=n; i++)
    printf("%d ", i*i+1);
}*/