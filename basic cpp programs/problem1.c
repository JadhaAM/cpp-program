// Write a program to calculate sum of first N odd natural numbers
/*#include<stdio.h>
int main()
{
    int i, s=0, n;
    printf("Enter a number: ");
    scanf("%d ",&n);
    for (i=1;i<=n;i++)
        s=s+2*i-1;      
    printf("%d ",s);
}   */



// Write a program to reverse a given number
#include<stdio.h>
int main()
/*{
    int i, reverse=0, num;
    printf("enter a number: ");
    scanf("%d", &num);
    while (num>0)
    {
        i=num%10;
        reverse = reverse*10+i;
        num=num/10;
    } 
    printf("Reverse the number: %d", reverse );   
}*/
/*
---------------- EXPLINATION OF PROGRAM-------------
given variables i, reverse=0, num we take number 234 which is store in num 
then check while loop 234>0 is true so emterring in loop body 
i=num%10 ==> 234%10 ==> 4   reverse = reverse*10+i ==> 0*10+4 ==> 4
then num=num/10 ==> 234/10 ==> 23
again check 23>0 is true i=23%10 ==> 3 reverse= 4*10+3 ==>43 
23/10 = 2
again check 2>0 is true then i = 2%10 = 2 reverse= 43*10+2 ==> 432
2/10 = 0 again check 0>0 is false loop end.....
then print ====>> Rverse the number: 432      
*/


// given example=12000 print=00021
/*{
    int num, a;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (num>0)
    {
        a=num%10;
        printf("%d ",a);
        num=num/10;
    }    
}*/

// ----------- ALSO USED ----------------
{
    int n, x=0, k, count=0, lock=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (n>0)
    {
        k=n%10;
        if (k==0&&lock)
           count++;
        else
           lock=0;
        x=x*10+k;
        n=n/10;        
    }
    while(count--)
       printf("%c",'0');
    printf("%d",x);  
}