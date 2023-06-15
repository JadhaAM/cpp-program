/* Write a program which takes mark obtained in an examination (out of 100)
form user user and display the appropriate grade
90<marks<=100 -----> A
80<marks<=90  -----> B
70<marks<=90  -----> C
60<marks<=70  -----> D
50<marks<=60  -----> E
marks<=50     -----> F
*/ 
#include<stdio.h>
void main()
/*{
    int Marks;
    printf("Enter your Marks: ");   // NOT RUN ACCURATELY 😒😔😔
    scanf("%d",&Marks);
    {
       if(90<Marks<=100)
        printf("Your grade= A");
       if(80<Marks<=90)
        printf("Your grade= B");
       if(70<Marks<=80)
        printf("Your grade= C");
       if(60<Marks<=70)
        printf("Your grade= D");
       if(50<Marks<=60)
        printf("Your grade= E");
       else
        printf("Sorry... You are fail😔, grade= F");
    }
}*/

// ------------ USING SWITCH CASE ----------- //
/*{
    int Marks;
    printf("Enter your marks: ");    
    scanf("%d",&Marks);
    switch (Marks)
    {
    case 91 ... 100:             // 91 ... 100 print series 91 to 100
        printf("Grade = A");
        break;
    case 81 ... 90:
        printf("Grade = B");
        break;
    case 71 ... 80:
        printf("Grade = C");
        break;
    case 61 ... 70:
        printf("Grade = D");
        break;
    case 51 ... 60:
        printf("Grade = E");
        break;
    case 0 ... 50:
        printf("Grade = F");
        break;
    default:
        printf("Enter marks out of 100");
        break;
    }
}*/


/* 👉🏻👉🏻 Write a program to calculate the area of circle, rectangle
 and triangle using switch case statement 👈🏻👈🏻 */
 {
     int choice;
     printf("1. For area of circle");
     printf("\n2. For area of rectangle");
     printf("\n3. For area of triangle");
     printf("\nEnter a number for ur choice: ");
     scanf("%d",&choice);
     switch (choice)
     {
     case 1:
         float r, areaC;
         printf("Enter radius: ");
         scanf("%f",&r);
         areaC=3.14*r*r;
         printf("Area of circle: %f", areaC);
         break;
     case 2:
         int l, b, areaR;
         printf("Enter length: ");
         scanf("%d",&l);
         printf("Enter breadth: ");
         scanf("%d",&b);
         areaR=l*b;
         printf("Area of rectangle: %d", areaR);
         break;
     case 3:
         float sideA, sideB, sideC, S, areaT;
         printf("Enter the Sides of triangle: ");
         scanf("%f %f %f", &sideA, &sideB, &sideC);
         S = (sideA+sideB+sideC)/2;
         areaC=sqrt(S*(S-sideA)*(S-sideB)*(S-sideC));
         printf("Area of triangle: %f", areaC);
         break;
     default:
         printf("Please select proper choice.....");
         break;
     }
 }