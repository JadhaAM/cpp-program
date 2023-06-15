// 1}👉🏻👉🏻 ---- Write a function to calculate sum of two numbers (TNRN)
// Takes nothing Returns nothing ------> void sum() (no any arguments)
//Returns Nothing means ----> void
#include<stdio.h>
/*void sum()
{
  int a, b, s;
    printf("Enter a number: ");
    scanf("%d %d",&a, &b);
    s=a+b;
    printf("%d",s);
}
main()
{
    sum();          // This is call "function" call
    return 0;
}
👇🏻
👇🏻
👇🏻*/

// 2}👉🏻👉🏻 ---- Write a function to calculate sum of two numbers (TSRN)
//(TSRN) ------> Take Something Returns Nothing

/*void add(int a, int b)
{
    int c;
    c=a+b;
    printf("sum is %d", c);
}
main()
{
    add(54, 67);
    return 0;
}

// ------- ENTER FROM USER ---------- //
main()
{
    int m,n;
    printf("Enter a numbers: ");
    scanf("%d %d", &m, &n);
    add(m,n);
    return 0;
}
👇🏻
👇🏻
👇🏻*/

// 3}👉🏻👉🏻 ---- Write a function to calculate sum of two numbers (TNRS)
// kontehi function return keyword cha madatine only one value return kru shakat

/*int sum(){
    int a, b, c;          // local variables
    printf("Enter a number as ur choice: ");
    scanf("%d %d ", &a, &b);
    c= a+b;
    return c;                        // c chi value return mdhe store hoil an main
                                    // function mdhe call hoil kontyahi variable mdhe                                 
}
main()
{
    int s;
    s=sum();  
    printf("Sum of two numbers is %d", s);
    getch();
}
👇🏻
👇🏻
👇🏻*/

// 4} 👉🏻👉🏻------ Write a function to calculate sum of two numbers (TSRS)
/*int add(int a, int b)         // a, b ====>> Formal Arguments
{
    int s;
    s=a+b;
    return s;
}
main()
{
    int x, y;
    int m;
    printf("Enter a numbers: ");
    scanf("%d %d",&x, &y);
    m=add(x,y);            // x, y  ====>> Actual arguments
    printf("sum is %d",m);
}
👇🏻
👇🏻
👇🏻*/

// 5}👉🏻👉🏻 ---- Write a program to calculate area of circle(TSRS)
/*float area(float r)
{
    float A;
    A=3.14*r*r;
    return A;
}
main()
{
    float x;
    float r;
    printf("Enter radius: ");
    scanf("%f",&r);
    x=area(r);
    printf("Area of circle: %f",x);
}
👇🏻
👇🏻
👇🏻*/

/* 6} 👉🏻👉🏻 ----- Write a function to check wether a given number is even or odd. 
Function will return 1 if number is even and will return 0 if number is odd (TSRS) */
/*int evenOdd(int a)
{
    return a%2==0;             // also used return = !(a%2)
}
main()
{
    int m;
    printf("Enter a number: ");
    scanf("%d",&m);
    if(evenOdd(m))
      printf("Even");
    else
      printf("Odd");
}*/
//👇🏻
//👇🏻
//👇🏻

// 7}👉🏻👉🏻---- Write a function to calculate factorial of a number (TSRS)
/*int factorial(int a)
{
    int f=1;
    while (a)
    {
        f=f*a;
        a--;
    }
    
    return f;
}
main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Factorial is: %d",factorial(x));
}
👇🏻
👇🏻
👇🏻*/

// 8}👉🏻👉🏻----- Write a function to find number of possible combinations can be made out of n items,
// are selected at a time (TSRS)
int fact(int n)
{
    int f=1;
    while(n)
    {
        f=f*n;
        n--;
    }
    return f;
}
int combination(int n, int r)
{
    return fact(n)/fact(n-r)/fact(r);
}
main()
{
    int a,x,y;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("The factorial is: %d", fact(a));
    printf("\nEnter value of n & r: ");
    scanf("%d %d",&x,&y);
    printf("\nNumber of combinations is: %d",combination(x,y));
}