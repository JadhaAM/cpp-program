#include<stdio.h>

int main() 
{
    char C, s[50], sen[100];
    scanf("%c %s\n %[^\n]s",&C, &s, &sen);
    
    printf("%c\n %s\n %s",C, s, sen);
    
    scanf("%c", &C);
    scanf("%s\n",&s);
    scanf("%[^\n]s", &sen);

    printf("%c\n",C);
    printf("%s\n",s);
    printf("%s",sen);

   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT
    C
Language
Welcome To C!! */   

   
}