// Calculate the sum of N numbers using function

#include<stdio.h>

/*int SumOfnumbers(int n);

int main()
{
    int n, sum;
    printf("Enter the number range from 1: ");
    scanf("%d",&n);
    sum= SumOfnumbers(n);
    printf("Sum of the numbers range from 1 to %d : %d", n,sum);
    return 0;
}

int SumOfnumbers(int n)
{
    int res;
    if(n == 1)
       return 1;
    else
       {
           res = n + SumOfnumbers(n - 1);
       }
       return (res);
}*/


int sum(int);
int main()
{
    int n, s;
    printf("sum of the numbers rangres from 1 : ");
    scanf("%d",&n);
    s = sum(n);
    printf("The sum of numbers ranges from 1:%d is %d", n, s);  
}

int sum(int n)
{
    int result;
    if(n==1)
       return 1;
    else
    {
        result =n + sum(n-1);
    }
      return(result);
}