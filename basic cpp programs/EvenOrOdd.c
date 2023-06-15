// Write a program to check whether a given number is even or add
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num%2==0)
    {
        printf("Given number is even...!!");  
    }
    else
    {
        printf("Given number is odd...!!");
    }
}


/*-------- also use ----------
if(num%2)
{
    printf("number is odd..")        //if num%2 is non-zero it is true & if it is zero then false
}
else
{
    printf("number is even..")
}


 -------  ALSO USE  -------
 if(num*2-1)
 {
     printf("number is odd..")
 }
 else
 {
     printf("number is even..")
 }
 
 
 ----------  Also use   ----------
 if(num/2*2==num)
 {
     printf("number is even..");
 }
 else
 {
     printf("number is odd..);
 }



 ---------- Also use(Bitwise oprator) -------
 if(num&1)
 {
     printf("number is odd..");    
 }
 else
 {
     printf("number is even..");
 }



 ------------ Also use -------------
  if((num^1)==0(n+1))
    {
        printf("Given number is even...!!");  
    }
    else
    {
        printf("Given number is odd...!!");
    }*/