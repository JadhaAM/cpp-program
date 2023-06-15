// Write a program to print greatest number among 3 given numbers

#include<stdio.h>
int main()
/*{
    int a, b, c;
    printf("Enter the 3 numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b & a>c)
    {
        printf("%d is greater..!!",a);
    }
    if(b>a & b>c){
        printf("%d is greater..!",b);
    }
    else
    {
        printf("%d is greater..!!",c);
    }
}*



//------------ also use ------------ in this program if 2 or 3 numbers are same then executes all 3 "if"
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b && a>=c)
    printf("%d",a);

    if(b>=a && b>=c)
    printf("%d",b);
    
    if(c>=a && c>=b)
    printf("%d",c);
}*/



// ------ solution of above problem
/*{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b && a>=c)
    printf("%d",a);
    else
    {
        if(b>c)
        printf("%d",b);
    
        else
        printf("%d",c);
    }
}*/




// --------- Modifying the program (this better than above) -------------
/*{
     int a, b, c;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)                 // in this condition check "a" is greateror "c" is greater 
    {
        if(a>c)
            printf("%d",a);
        else
            printf("%d",c);
    }
    else                   // i above condition is false hen go to else statement in this condition 
    {                      // check "b" is greater or "c" is greater
        if (b>c)
            printf("%d",b);
        else
            printf("%d",c);
    }
}*/



/* --------SYNTAX FOR CONDITIONAL OPERATOR-------
  ((---CONDITION ? (IF KA CODE) : else STATEMENT KA CODE----))*/

/*{
    int a, b, c;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);

    // using conditional operator
    if(a>b)
    { 
        a>c?printf("%d",a):printf("%d",c);
    }
    else
    {
        b>c?printf("%d",b):printf("%d",c);
    }
}*/

// ------- AGAIN USING CONDITIONAL STATEMENT -------
/*{
    int a, b, c;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);

    // using conditional operator
    a>b ? a>c?printf("%d",a):printf("%d",c):b>c?printf("%d",b):printf("%d",c);
}*/

// ---------- Removing Printf ----------
{
    int a, b, c;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);

    // using conditional operator
    printf("%d",a>b ? a>c ? a : c : b>c ? b : c);
}