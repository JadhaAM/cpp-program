// 8} -------------- 👇🏻👇🏻 Output 👇🏻👇🏻 -------------- //
/* 
                             1
                           1 2 1
                         1 2 3 2 1
                       1 2 3 4 3 2 1
*/
#include<stdio.h>
int main()
{
    int i, j, k;
    for(i=1; i<=4; i++)
    {
        k=1;
        for(j=1; j<=7; j++)
        {
            if(j>=5-i && j<=3+i)
              {
                printf("%d ", k);
                if(j<4)
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

// ----------- ENTER FROM USER --------------- //
/*{
    int i, j, k, n;
    printf("Enter Rows: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        k=1;
        for (j=1; j<=2*n-1; j++)
        {
            if(j>=n+1-i && j<=n-1+i)
            {
                printf("%3d", k);
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

// 9} -------- 👇🏻👇🏻 Output 👇🏻👇🏻 -------- //
/*
           A B C D C B A
           A B C   C B A
           A B       B A
           A           A
*/
/*{
    int i, j, k, n;
    printf("enter rows: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
      k='A';
      for(j=1; j<=2*n-1; j++)
      {
        if(j<=n+1-i || j>=n-1+i)
        {
          printf("%c ", k);
          if(j<n)
            k++;
          else
            k--;
        }
        else
        {
          printf("  ");
          if (j==n)
          k--;
        }
      }
      printf("\n");
    }
}*/


// 10} ------------- 👇🏻👇🏻 Output 👇🏻👇🏻 --------------- //
/*
             *
           * * *
         * * * * *
       * * * * * * * 
         * * * * * 
           * * * 
             * 
*/
/*{
  int i, j, k=0;
  for(i=1; i<=7; i++)
  {
    i<=4?k++:k--;
    for(j=1; j<=7; j++)
    {
      if(j>=5-k && j<=3+k)
      {
        printf("* ", k);
      }
      else
        printf("  ");
    }
    printf("\n");
  }
}*/

// ------------ ENTER FROM USER ----------- //
/*{
  int i, j, k=0, n, a;
  printf("Enter a number of rows: ");
  scanf("%d",&n);
  a=(n+1)/2;
  for(i=1; i<=n; i++)
  {
    i<=a? k++: k--;
    for(j=1; j<=n; j++)
    {
      if(j>=a+1-k && j<=a-1+k)
        printf("* ", k);
      else
        printf("  ");
    }
    printf("\n");
  }
}*/


// 11} ------ 👇🏻👇🏻 Output 👇🏻👇🏻 ------  //
/*
          *
          * *
          * * * 
          * * * *
          * * *
          * * 
          *
*/

/*{
  int i,j,k=0;
  for(i=1; i<=7; i++)
  {
    i<=4? k++: k--;
    for(j=1; j<=4; j++)
    {
      if(j<=k)
       printf("* ",k);
      else
       printf("  ");
    } 
    printf("\n");
  }
}*/

// ------------ ENTER FROM USER ------------- //
/*{
  int i, j, k=0, n, m;
  printf("Enter a number of rows: ");
  scanf("%d",&n);
  m=(n+1)/2;
  for(i=1; i<=n; i++)
  {
    i<=m? k++:k--;
    for(j=1; j<=m; j++)
    {
      if(j<=k)
        printf("* ",k);
      else
        printf("  ");
    }
    printf("\n");
  }
}*/


// 12} ------------- 👇🏻👇🏻 Output 👇🏻👇🏻 -------------- //
/*
                   * * * * * * * 
                     * * * * *
                       * * *
                         * 
*/
/*{
  int i, j;
  for(i=1; i<=4; i++)
  {
    for(j=1; j<=7; j++)
    {
      if(j<=8-i && j>=i)
        printf("* ");
      else
        printf("  ");
   }
   printf("\n");
  }
}*/