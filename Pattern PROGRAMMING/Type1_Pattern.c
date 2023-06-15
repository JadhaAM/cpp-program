// 1} ----------- 👇🏻👇🏻 Output 👇🏻👇🏻 ----------- //
/*
      *
      **
      ***
      ****
      *****
*/
#include<stdio.h>
int main()
/*{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(j<1+i)
              printf("*");
            else
              printf(" ");
        }
        printf("\n");
    }
}*/

// --------- Enter From User -----------
/*{
    int i, j, n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j<1+i)
              printf("* ");
            else
              printf("  ");
        }
        printf("\n");
    }
}*/


// 2} ---------👇🏻👇🏻 Output 👇🏻👇🏻 ------------ //
/*
           *
         * *
       * * *
     * * * *
   * * * * *
*/
/*{
    int i, j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(j>5-i)
              printf("* ");
            else
              printf("  ");
        }
        printf("\n");
    }
}*/
 
// -------- Enter from user --------- //
/*{
    int i, j, lines;
    printf("Enter no of lines: ");
    scanf("%d",&lines);
    for(i=1; i<=lines; i++)
    {
        for(j=1; j<=lines; j++)
        {
            if(j>lines-i)
              printf("* ");
            else
              printf("  ");
        }
        printf("\n");
    }
}*/


// 3} ------------- 👇🏻👇🏻 Output 👇🏻👇🏻 ------------- //
/*
       * * * * * *
         * * * * *
           * * * *
             * * *
               * *
                 * 
*/
/*{
    int i, j;            // Enter fron user (Replace 6 by variable)
    for(i=1; i<=6; i++)
    {
        for(j=1; j<=6; j++)
        {
            if(j>=0+i)
               printf("* ");
            else
               printf("  ");
        }
        printf("\n");
    }
}*/

// 4} ------------- 👇🏻👇🏻 Output 👇🏻👇🏻 -------------- //
/*
        * * * * * * 
        * * * * *
        * * * *
        * * * 
        * *
        *
*/
/*{
  int i, j;
  for(i=1; i<=6; i++)
  {
    for(j=1; j<=6; j++)
    {
      if(j<=7-i)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
}*/

// --------- EMTER FROM USER ----------- //
{
  int i,j, n;
  printf("Enter rows: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
    for(j=1; j<=n; j++)
    {
      if(j<=n+1-i)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
}