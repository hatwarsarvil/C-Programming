
#include<stdio.h>
#include<stdlib.h>

void main()

{
  int a[5]; // Here we give the memory to arrray, it means variable_a can store 5 values
  int i; int Result; int sum=0; int avg; // Here int means a data_type which stores an integer values

  for (i=0;i<5;i++) // This is for loop, it is use to execute program again and again

  {
    printf("Enter The Value Of Array : ");
    scanf("%d", &a[i]);
  }


  for (i=0;i<5;i++)  // This loop will run 5 times

  {
  sum = sum+ a[i];
  }

  avg = sum/5;
  printf("\nSum Is : %d \n", sum);
  printf("Average Is : %d", avg);

getch();
clrscr();

}