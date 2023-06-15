// 15} --------- 👇🏻👇🏻 Output 👇🏻👇🏻 ------------- //
#include<stdio.h>
void main()
{
    int i, j, k=0,a;
    for(i=1; i<=9; i++)
    {
        i<6?k++:k--;
        a=1;
        for(j=1; j<=5; j++)
        {
            if(j>=6-k)
            {
              printf("%d ", a);
              a++;
            }
            else
              printf("  ");
        }
        printf("\n");
    }
}