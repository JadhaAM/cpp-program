#include<stdio.h>
int main()
{
    int a, b;
    for ( a=1; a<=5; a++)
    {
        for(b=1; b<=2*a-1; b++)
            printf("%d", b);
        printf("\n");
    }   
}

/*
-------------- EXPLINATION OF THIS PROGRAM -------------

firstly a=1 b=1
pahilya for loop chi condition check hoil 1<=5 is true 
atmdhlya for loop kde jail b=1 1<=2*1-1 ==> 1<=1 is true b chi value "1" print hoil
b increament hoil so b=2 2<=2*1-1 ==> 2<=1 is false second printf chalel cursor new line la jail
a increament hoil a=2 condition true 2<=5 atmdhe yeil b=1 1<=2*2-1 ==> 1<=3 is true
printf chalel b chi value 1 print hoil ase 1 2 3 paryant print hoil 
b=4 hoil 4=2*3-1 ==> 4<=3 is false so cursor new line la yeil
a=3 hoil 3<=5 is true next loop mdhe b=1 1<=2*3-1 ==> 1<=5 is true 
printf chalel b chi value 1 print hoil ata b 1 pasun 5 paryant print hoil b=8 hoil condition false 
cursor new line la jail a=4 hoil a<=5 is true next loop mdhe again b=1 hoil 1<=2*4-1 ==> 1<=7 
printf chalel b chi value 1 print hoil ata b chi value loop madhe 1 pasun 7 paryant chalel 1 te 7 paryant number print hotil
b=8 condition false cursor new line la jail
a=5 hoil 5<=5 is true next loop madhe again b=1 hoil 1<2*5-1 ==> 1<=9 true
printf chalel b chi value 1 print hoil ata b chi value loop madhe 1 pasun 9 paryant chalel 1 te 9 paryant number print hotil
b=9 condition false cursor new line la jail
a=5 hoil 6<=5 condition false 
loop end........!!!  */