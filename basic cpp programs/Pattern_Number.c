//-------------- ANOTHER PATTERN (NUMBER PATTERN) --------------
#include<stdio.h>
int main()
{
  int n, i, j, k;
  printf("Enter a no of rows:");
  scanf("%d", &n);
  for(i=1; i<=n; i++)
  {
    k=1;
    for(j=1;j<=2*n-1;j++)
    {
      if(j>=n+1-i && j<=n-1+i)
      {
        printf("%d ",k);
        if(j<n)
          k++;
        else
          k--;
      }
      else
        printf("  ");
    }
    printf("\n");
  }
}

// --------------- IF ROWS GREATER THAN 10 ---------------
/*{
  int i, j, n, k;
  printf("Enter no of rows: ");
  scanf("%d", &n);
  for(i=1; i<=n; i++)
  {
    k=1;
    for(j=1; j<=2*n-1; j++)
    {
      if(j>=n+1-i && j<=n-1+i)
      {
        printf("%3d",k);        // %3d take 3 character if we type 1 char he take 3......
        if(j<n)
          k++;
        else
          k--;
      }
      else
        printf("   ");
    }
    printf("\n");
  }
}*/


// ------------- star Pattern -------------
/*
--------- Output 👇🏻👇🏻👇🏻 --------
*****
 ****
  ***
   **
    *
*/
/*{
    int i,j,n;
    printf("Enter rows: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
          if(j>=0+i)
          {
            printf("* ");
            
          }
          else                     
            printf("  ");
        }
        printf("\n");
    }
}*/


// --------- Output -------------
/*
     *
     * *
     * * *
     * *
     *
*/
// NOT DONE😒😒😒
/*{
  int i,j;
  for(i=1; i<=5; i++)
  {
    for(j=1; j<=53; j++)
    {
      if(i<4-j || i>2+j)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}*/