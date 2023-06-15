// TNRS ------- (Take Nothing Return Something)

#include<stdio.h>
int Mul()
{
    int a,b,c;
    printf("Enter a numbers: ");
    scanf("%d %d ", &a, &b);
    c=a*b;
    return(c);         //return only 1ch value return krt return cha nantr apn kahi write kru 
                       // shakt nahi te unreachable code asto
}

char Alphabate()
{
    char ch='a';
    while (ch<='z')
    {
        printf("%c ",ch);
        ch++;
    }
    Mul();
}

int main()
{
    int s;
    s=Mul();
    printf("%d\n",s);
    Alphabate();
}