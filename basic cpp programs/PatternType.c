#include<stdio.h>
int main()
/*{
  int n;
  printf("Enter a number of rows:");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i; j++)
    {
      printf("*");
    }
    printf("\n");
  } 
} */

//------------- ALSO USED ---------------
/*{
  int i,j;
  for(i=1; i<=4; i++)
  {
    for(j=1; j<=4; j++)
    {
      if(j<=i)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}*/


// ----------- ANOTHER PATTERN ----------------
/*
{
  int i,j;
  for(i=1; i<=5; i++)
  {
    for(j=1; j<=9; j++)
    {
      if(j>=6-i && 4+i)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}
  */

 //--------- ENTER VALUE FROM USER -------------
/*{
  int n, i, j;
  printf("Enter number of rows: ");
  scanf("%d", &n);
  for(i=1; i<=n; i++){
    for(j=1; j<=2*n-1; j++){
      if (j>=n+1-i && j<=n-1+i)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}*/


//-------------- ANOTHER PATTERN (NUMBER PATTERN) --------------
/*{
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
}*/

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