#include<stdio.h>
int main()
/*{
    int i, j;
    for(i=1; i<=5; i++)
    for(j=i+1; j<=4; j++)
    printf("%d ",2*j-1);
}

//--------- EXPLINATION OF THIS PROGRAM --------------

 starting la agodr for loop chalel i chi value 1 nantr 2nd for loop chalel j=2 condition check hoil 
nantr printf chalel value print hoil nantr 2nd for loop chalel j=3 hoil printf chalel, j=4 hoil printf 
chalel, j=5 hoil condition false hoil mg 1st loop chalel i=2 hoil nantr j=3 hoil prinf chalel, j=4 hoil 
printf chalel, j=5 condition false, 1st for loop chalel i=3 then j=4, printf chalel j=5 condition false
i=4 hoil then j=5 condition false again 1st for loop chalel i=5 then j=6 again condition false , again 
1st for loop i=6 condition false.... and all loop will finished..!! LAST i=6 & j=6 
*/



/*{
    int i=5, j=1;
    while(i)       // in while loop 0 is consider as "false" & every non-zero value is comsider as "true"
    {
        j=i*j;
        i--;
    }
    printf("%d %d ", i,j);
}*/

// -------------- EXPLINATION OF PROGRAM ---------------

/*  printf loop chabaher ahe so jevha condition false hoil tevhach printf chalel 1st i=5 & j=1 ahe
means i true ahe then j=5*1=5 hoil, i-- ahe so i=4 hoil j=4*5=20 hoil 
i=3  j= 3*20 = 60
i=2  j= 2*60 = 120
i=1  j= 1*120 = 120
i=0  ondition false hoil printf chalel i=0 & j=120 mhanun 0 120 print hoil
*/ 



/*{
    int x=1, y=10;
    while (x<y)
    {
        x++;
        y--;
    }
    printf("%d %d",x, y);
}*/

// ------------ EXPLINATION OF PROGRAM ---------------

/* First x=1 & y=10 x<y is true so loop chalel 
x=2 & y=9 hoil
x=3 & y=8 hoil
x=4 & y=7 hoil 
x=5 & y=6 hoil
x=6 & y=5 hoil condition false printf chalel x and y chi value 6,5 print hoil 
*/

/*{
    int i=2, x=36;
    while(x>1)
    {
        while(x%i==0)
        {
            x /= i;         // ===> x= x/i
            printf("%d ", i);
        }
        i++;
    }
}*/

// ------------- EXPLINATION OF PROGRAM -----------------
/*
First while chi condition check hoil (x>1)==>(36>1) atmdhe jail then aatmdhlya while chi 
condition check hoil (x%i==0)==>(36%2==0) is true ha loop chalel (x /= i) means (x=x/i) (36/2 = 18)
x=18 i chi value "2" print hoil
again 18%2==0 true hoil x==> 18/2=9 i chi value "2" print hoil
again 9%2 false hoil loop cha baher padel i=3 hoil pahilya while chi condition check hoil
9>1 dusra loop chalel 9%3==0
x==> 9/3 = 3 ata i chi value "3" print hoil
3%3==0 true x==> 3/3= 1 ata i chi value "3" print hoil
1%3==0 condition false i=4 hoil 
pahilya loop chi condition check hoil (1>1) condition false
loop end.......*/

/*{
    int x=(1,2,3);
    while (x)
    {
        printf("%d ",x);
        x--;
    }
}*/

// --------- EXPLINATION OF PROGRAM ------------

/* x chi value x=3 hoil condition true hoil 3 print hoil x decrement hoil x=2
x chi value 2 print hoil again decrement x=1 hoil x chi value 1 peint hoil 
again decrement x=0 hoil but conditon false loop end..... 
*/


/*{
    int x=128;       // in binary (128  =  1 0 0 0 0 0 0 0 )
    for(;x;x>>=1)
    printf("%d ",x);
}*/

// ------------ EXPLINATION OF PROGRAM --------------

/*
x chi value 128 ahe for mdhe 1st condition kahich nahi so skip hoil nantr x ahe mhnun x chi value "128"
print hoil x>>=1 (right-shift Bitwise operator) condition check hoil ek 0 right side la shift hoil 
x=64 hoil print chi value 64 print hoil
ata x=32 hoil 32 print hoil
x=16 hoil printf 16..
x=8 hoil print 8
x=4 hoil 4 print hoil
x=2 hoil print 2
x=1 hoil print 1
x=0 hoil condition false loop end.....*/

/*
{
    int x=1, a,s;
    for(s=0,a=5;a;x<<=1,a--)    // x<<=1 (left-shift operator)
    {
        s=s+x;
    }
    printf("%d ",s);
}*/

// ---------- EXPLINATION OF PROGRAM --------------
/*
initial values x=1 a=5 s=0 
firstly a=5 condition true loop chalel s=0+1 = 1 hoil 
a=4 hoil ata bitwise operator mule x=2(in binary--10) hoil s=1+2 = 3 hoil
a=3 hoil x=4(in binary-- 100) s=3+4 = 7
a=2 hoil x=8(in binary--1000) s=7+8 = 15
a=1 hoil x=16(in binary--10000) s=15+16 = 31
a=0 condition false loop end...
loop cha baher padel printf chalel s chi value "31" print hoil....*/


{
    int i=1;
    do
    {
        printf("%d", i );
        i++;
    }
    while (i=i-2);   
} 

// ---------- EXPLINAION OFPROGRAM -----------
/*
i=1 ahe do loop chalel tyala kontich condition nahi atmadhe jail 
printf chslel ani i chi vslue (1) print hoil then i++ i=2 hoil 
while loop chi condition check hoil i=2-2 = 0 condition false hoil loop end.....  */