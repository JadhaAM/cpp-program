// To check given number is Armstrong or not....
/* 👉🏻👉🏻 For Example 👈🏻👈🏻 */
     /*  153 = (1*1*1)+ (5*5*5)+ (3*3*3)
           =  1+ 125+ 27
           =   153 */

#include<stdio.h>

/*void main()
{
    int n,r,sum=0,temp;
    printf("Enter any number: ");
    scanf("%d ", &n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
       printf("Armstrong..");
    else
       printf("not Armstrong..");
}*/


// ---------- USING FUNCTION ---------- //
void isArmstrong(int n)
{
    int  r, sum=0, temp;
    temp=n;
    while(n>0)
       {
            r=n%10;
            sum=sum+(r*r*r);
            n=n/10;
        }
        if(temp==sum)
           printf("Armstrong..");
        else
           printf("not Armstrong..");
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d ", &n);
    isArmstrong(n);
}