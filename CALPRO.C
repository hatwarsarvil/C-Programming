#include<stdio.h>
#include<stdlib.h>

void main()

{
    int ch; float f1; float f2;

    printf("1 For Addition \n");
    printf("2 for substraction \n");   // Here You Have To Select operations
    printf("3 for multiplication \n");
    printf("4 for division \n");

    printf("\nEnter The Value Of CH : "); // Enter No. Which Operation You Have To Perform
    scanf("%d", &ch);

    printf("\nEnter The Value Of F1 : ");
    scanf("%f", &f1);

    printf("Enter The Value  Of F2 : ");
    scanf("%f", &f2);



    if (ch == 1) // Condition Checking (nested if)
    {
      int Sum;
      Sum = f1+f2;

     printf("\nAddition is : %d", Sum);
    }

    if (ch == 2 )
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
      float Div;
      Div = f1/f2;

    printf("\nDivison is : %f", Div);
    }


getch();
clrscr();

}
