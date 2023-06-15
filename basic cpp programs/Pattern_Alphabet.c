// ----------------- PATTERN(ABCD) --------------------
#include<stdio.h>
int main()
/*{
  int i,j;
  char k;
  for(i=1; i<=4; i++)
  {
    k='A';
    for(j=1; j<=7; j++)
    {
      if(j<=5-i || j>=3+i)
      {
        printf("%c ",k);
        if(j<4)       
          k++;
        else
          k--;
      }
      else
      {
        printf("  ");
        if(j==4)
        k--;
      }
    }
    printf("\n");
  }
}*/

// ------------------ ENTER FROM USER -----------------------
{
  int i,j,n;
  char k;
  printf("Enter no of rows: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
    k='A';
    for(j=1; j<=2*n-1; j++)
    {
      if(j<=n+1-i || j>=n-1+i)
      {
        printf("%c ",k);
        if(j<n)       
          k++;
        else
          k--;
      }
      else
      {
        printf("  ");
        if(j==n)
        k--;
      }
    }
    printf("\n");
  }
}