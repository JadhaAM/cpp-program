/*
   -------    Task:-    -------
   Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments
   and return the greatest of them...

   --------- Input Format ---------
   input will contain four inyegers- a, b, c, d one on each line

   ----------- output format ---------
   Print the greatest of the four integers
   ------------- Sample input ------------
                  3
                  4
                  6
                  5
   ------------- Sample Output -------
                  6
   */
  #include<stdio.h>
  /*int max_of_four(int a, int b, int c, int d)
  {
     int max;
     if(a>b)
        max = a>c? a>d? a:d: c>d? c:d;
     else
        max = b>c? b>d? b:d: c>d? b:d;
     return max;
  }
  int main()
  {
     int a,b,c,d;
     scanf("%d %d %d %d",&a,&b,&c,&d);
     int ans= max_of_four(a,b,c,d);
     printf("%d",ans);
     return 0;
  }
  👇🏻
  👇🏻
  👇🏻*/

  /* ------------ &&&&& "" Task "" &&&&& -------------
  Print a pattern of numbers from 1 to n as shown as bellow. Each of the numbers is 
  separated by a sinle space
           4 4 4 4 4 4 4 
           4 3 3 3 3 3 4
           4 3 2 2 2 3 4
           4 3 2 1 2 3 4
           4 3 2 2 2 3 4
           4 3 3 3 3 3 4
           4 4 4 4 4 4 4

----------- Input Format ----------
The input will contain a single integer n
----------- Output Format -----------
Pattern as shown above
---------- Sample Input ------------
      2
---------- Sample Output ----------
      2 2 2 
      2 1 2
      2 2 2
  */
 int main()
 {
    int n, i, j, k,r;
    scanf("%d",&n);
    for(i=1, r=0; i<=2*n-1; i++)
    {
       i<=n?r++:r--;
       k=n;
       for(j=1; j<=2*n-1; j++)
       {
          if(j>=r && j<=2*n-r)
          {
            printf("%d ",k);
          }
         else
         { 
            if(j<n)
            {
              printf("%d ",k);
              k--;
            }
            else
            {
               k++;
              printf("%d ",k);
            }
         }
       }
       printf("\n");
    }
 }

