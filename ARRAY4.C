			    // welcome to my array program no.4



#include<stdio.h>
#include<stdlib.h>

void main()

{
  int i; int a[10]; int sum=0; float avg; float avg1; int sum1=0;

  for (i=0;i<10;i++) // this is for loop used to rotate loop

  {
  printf("Enter The Value Of Array : ");
  scanf("%d", &a[i]);
  }

  for (i=0;i<10;i++)

  {
   printf("\n%d", a[i]);
  }


 for (i=0;i<5;i++)

 {
  sum = sum + a[i]; // a[i] means, here that one by one value will come in this loop and exexute the loop only after the condition is true
  avg = sum/5;
 }

 printf("\nSum Of First 5 Numbers Is : %d \n", sum);
 printf("Avg Of First 5 Numbers Is : %f \n", avg);


 for (i=5;i<=9;i++)
 {
// printf("i is %d", i);
 sum1 = sum1 + a[i];
 avg1 = sum1/5;
 }

 printf("Sum Of Other 5 Numbers Is : %d \n", sum1);
 printf("Avg Of Other 5 Numbers Is : %f", avg1);

getch();
clrscr();

}
