#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a numbers: ");
    scanf("%d %d", &a, &b);
    c=a+b;
    printf("sum is: %d", c);
    mul(a,b);

}

 int mul(int a, int b)
{
    int s;
    scanf("/n%d %d", &a,&b);
    s= a*b;
    printf("\nMultiplication is: %d", s);
}


