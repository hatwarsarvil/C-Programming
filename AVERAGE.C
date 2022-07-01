		   // Welcome To My Average Program



#include<stdio.h>
#include<stdlib.h>

void main()

{
 int a; int Result; int b; int c; int d; int e;


  printf("Enter The Value Of A : ");
  scanf("%d", &a);

  printf("Enter The Value Of B : ");
  scanf("%d", &b);

  printf("Enter The Value Of C : ");
  scanf("%d", &c);

  printf("Enter The Value Of D : ");
  scanf("%d", &d);

  printf("Enter The Value Of E : ");
  scanf("%d", &e);


  Result = (a+b+c+d+e)/5;  // Here We Perform Average Of 5 Numbers
  printf("Average Is : %d", Result);


getch();
clrscr();

}