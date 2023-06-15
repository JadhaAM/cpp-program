// Write a program to print first N natural number

#include<stdio.h>
int main()
{
    int i=1, n;
    printf("Enter a number: ");
    scanf("%d ",&n);
    
    while (i<=n)
    {
        if (i%2==!0)
        {
            printf("%d ", i);
        }
        i++;
    }  
}


// ----------- also use for loop ----------
/*{
    int i=1 , n;
    printf("enter a number: ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        if (i%2==! 0)
        {
            printf("%d ",i);
        }
        
    }
    
}*/