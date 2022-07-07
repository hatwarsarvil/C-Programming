		     // welcomec to my  program
		     // this is BMI calculator


#include<stdio.h>
#include<stdlib.h>

void main()

{
  float weight_kg,height_cm,H_CM,Height,BMI;

  printf("(1) Enter Your Weight In KG : "); // printf statement is used for output
  scanf("%f", &weight_kg); // scanf statement is used for input

  printf("\n(2) Enter Your Height In CM : ");
  scanf("%f", &height_cm);

  H_CM = height_cm/100;
  Height = (H_CM) * (H_CM);

  BMI = weight_kg/Height;

  printf("\n*  BMI OF YOUR BODY IS : %f", BMI);


getch();
clrscr();
}