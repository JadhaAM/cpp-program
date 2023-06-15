// 13} ---------- 👇🏻👇🏻 Output 👇🏻👇🏻 ------------ //
/* 
                          1
                        2 3 2
                      3 4 5 4 3
                    4 5 6 7 6 5 4
*/
#include<stdio.h>
int main()
/*{
    int i, j,k;
    for(i=1; i<=4; i++)
    {
        k=i;
        for(j=1; j<=7; j++)
        {
            if(j>=5-i && j<=3+i)
            {
              printf("%d ",k); 
              j<4? k++:k--;
            }
            else
              printf("  ");
        }
        printf("\n");
    }
}*/

// ---------- ENTER FROM USER ------------ //
/*{
  int i, j, k, n, m;
  printf("Enter a number of rows: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
    k=i;
    for(j=1; j<=2*n-1; j++)
    {
      if(j>=n+1-i && j<=n-1+i)
      {
        printf("%d ",k);
        j<n?k++:k--;
      }
      else
        printf("  ");
    }
    printf("\n");
  }
}*/

// 14} ---------- 👇🏻👇🏻 Output 👇🏻👇🏻 ------------ //
/*
                6 5 4 3 2 1 0
                5 4 3 2 1 0
                4 3 2 1 0
                3 2 1 0
                2 1 0
                1 0
                0
*/
/*{
  int i, j ,k;
  for(i=1; i<=7; i++)
  {
    k=7-i;
    for(j=1; j<=7; j++)
    {
      if(j<=8-i)
      {
        printf("%d ",k);
        if(j<7)
          k--;
      }
      else
        printf("  ");
    }
    printf("\n");
  }
}*/

//---------- ENTER FROM USER ------------ //
{
  int i,j,k,n;
  printf("Enter rows: ");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
    k=n-i;
    for(j=1; j<=n; j++)
    {
      if(j<=n+1-i)
      {
        printf("%d ",k);
        if(j<n)
         k--;
      }
      else
        printf("  ");
    }
    printf("\n");
  }
}


// --------- 👇🏻👇🏻 Output 👇🏻👇🏻 ---------- //
/*

*/