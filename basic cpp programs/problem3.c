// Write a program to check whether a given number is prime or not
#include<stdio.h>
int main()
{
    int n, b;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(b=2; b<n; b++)
       if(n%b==0)
        break;
    if(n==b)        
        printf("Number is prime..!");    
    else        
        printf("Number is not prime..!");   
}


// ------------ also used --------------

/*#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter a num:");
    scanf("%d",&n);
    for(i=2; i<=n/2; i++)
      if(n%i==0)
        break;
    if(i==n/2+1)
       printf("Prime.......");
    else
       printf("Not Prime........");
}*/


// --------------------- also used -------------------------
#include<stdio.h>
/*int main()
{
    int a, b, s;
    printf("Enter a number: ");
    scanf("%d", &a);
    s=sqrt(a);
    for (b=2; b<=s; b++)
       if(a%b==0)
        break;
    if(b==s+1)
       printf("Prime......!!!");
    else
       printf("Not Prime......!!!");
}
 */   