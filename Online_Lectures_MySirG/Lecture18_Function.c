// 1}👉🏻👉🏻----- Write a function to check a given number is prime or not (TSRS)
#include<stdio.h>
/*int isPrime(int n)
{
    int b;
    for(b=2; b<=n; b++)
      if (n%b==0)
      break;
    if(n==b)
    {
      printf("Prime...");
      return 1;
    }
    else
    {
      printf("not Prime....");
      return 0;
    }
}
main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    isPrime(n);
}*/

// ---------- also used ----------- //
int isPrime(int a)
{
    int i;
    for(i=2; i<a; i++)
      if(a%i==0)
        return 0;
    return 1;
}
/*main()
{
    int a;
    scanf("%d",&a);
    if(isPrime(a))
      printf("Prime...");
    else
      printf("Not Prime...");
}
👇🏻
👇🏻
👇🏻*/

// 2} 👉🏻👉🏻 ---- Write a function to print all prime numbers from a to b, where 
// a and b are taken as arguments.
void PrintPrime(int a, int b)
{
    int x;
    for(x=a; x<=b; x++)
     if(isPrime(x))
      printf("%d ",x);
}
main()
{
  int x, y;
  scanf("%d %d",&x, &y);
  PrintPrime(x,y);
  
}
/*👇🏻
👇🏻
👇🏻*/

// 3} 👉🏻👉🏻------ Write a function to print next prime number(TSRS)
/*int nextprime(int n)
{
  while (!isPrime(++n));       // ! jr condition true asel tr tyala false krt and vice versa
  return n;
}
int main()
{
  int a;
  scanf("%d",&a);
  printf("%d ", nextprime(a));
}*/