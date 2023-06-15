// 5}  -------------- 👇🏻👇🏻 Output 👇🏻👇🏻 ------------ //
/*
        *
      * * * 
    * * * * *
  * * * * * * * 
* * * * * * * * *
*/

#include<stdio.h>
int main()
/*{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=9; j++)
        {
            if(j>=6-i && j<=4+i)
               printf("* ");
            else
               printf("  ");
        }
        printf("\n");
    }
}*/

// ------------ Enter from user ------------ //
/*{
  int i, j, rows;
  printf("Enter no of rows: ");
  scanf("%d",&rows);
  for(i=1; i<=rows; i++)
  {
    for(j=1; j<=2*rows-1; j++)
    {
      if(j>=rows+1-i && j<=rows-1+i)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
}*/


// 6} ------------ 👇🏻👇🏻 Output 👇🏻👇🏻 ------------- //
/*
              *
             * *
            * * *
           * * * *
          * * * * *
*/
/*{
  int i, j, k ,n;
  //printf("Enter rows: ");
  //scanf("%d", &n);
  for(i=1; i<=5; i++)      //--Enter from user 👉🏻 for(i=1; i<=n; i++)
  { 
    k=1;
    for(j=1; j<=9; j++)    // for(j=1; j<=2*n-1; j++)
    {
      if(j>=6-i && j<=4+i && k)   // if(j>=n+1-i && j<=n-1+i && k)
      {
        printf("*");
        k=0;
      }
      else
      {
        printf(" ");
        k=1;
      }
    }
    printf("\n");
  }
}*/


// 7} ---------- 👇🏻👇🏻 Output 👇🏻👇🏻 ------------- //
/*
          * * * * * * * * * 
          * * * *   * * * * 
          * * *       * * *
          * *           * *
          *               *
*/

/*{
  int i, j;
  for (i=1; i<=5; i++)
  {
    for(j=1; j<=9; j++)
    {
      if(j<=6-i || j>=4+i)
      {
        printf("* ");
      }
      else
        printf("  ");
    }
    printf("\n");
  }
}*/

// ------------ ENTER FROM USER -------------- //
{
  int i, j, n;
  printf("enter a number of rows: ");
  scanf("%d", &n);
  for(i=1; i<=n; i++)
  {
    for(j=1; j<=2*n-1; j++)
    {
      if(j<=n+1-i || j>=n-1+i)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
}