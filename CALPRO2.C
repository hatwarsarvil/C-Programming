			  // Hello Everyone, Welcome To My Calculator Program


#include<stdio.h>
#include<stdlib.h>

void main()

{
   int f1; int f2; int ch;

   printf("Enter the first value :");
   scanf("%d", &f1);
   printf("Enter the second value :");
   scanf("%d", &f2);

   printf("\nEnter 1 To Perform Addition \n");
   printf("Enter 2 To Perform Substraction \n");   // here you have to enter the no for different operations
   printf("Enter 3 To Perform Multiplication \n");
   printf("Enter 4 To Perform Division \n");

   printf("\nEnter The No. To Perform Operation : ");
   scanf("%d", &ch);



   if (ch == 1)
   {
      int Sum;
      Sum = f1+f2;
      printf("\nSum Is : %d", Sum);

   }

   if (ch == 2)

   {
      int Sub;
      Sub = f1-f2;
      printf("\nSubstraction is : %d", Sub);
   }
   if (ch == 3)

   {
      int Mul;
      Mul = f1*f2;
      printf("\nMultiplication is : %d", Mul);

   }
   if (ch == 4)

   {
     int Div;
     Div = f1/f2;
     printf("\nDivision is : %d", Div);

   }


getch();
clrscr();


}


















