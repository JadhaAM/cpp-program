#include<stdio.h>
/*int main()
{
    int a[4];
    printf("print 1st letter:");
    scanf("%d",&a[0]);
    printf("1st letter is: %d\n ", a[0]);

    printf("print 2nd letter:");
    scanf("%d",&a[1]);
    printf("2nd letter is: %d\n ", a[1]);

    printf("prin 3rd letter:");
    scanf("%d",&a[2]);
    printf("3st letter is: %d \n", a[2]);

    printf("print 4th letter:");
    scanf("%d",&a[3]);
    printf("4st letter is: %d\n ", a[3]);
}*/


// using for loop
int main()
{
    int b[4];
    printf("enter type numners: \n");
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d ",&b[i]);
    }
     for (int i = 0; i < 5; i++)
     {
         printf("%d ",b[i]);
     }
}
