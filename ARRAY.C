		      // Welcome To My Program
		      // This Is An Array Program


// This Are Header Files
#include<stdio.h>
#include<stdlib.h>

void main() // This Main Function And It Is compulsory TO Written

{
   int a[5]; // Here We Selected The Number For Memory Location

   printf("Enter The Value Of A[0] : "); // printf is used to print the statement
   scanf("%d", &a[0]);
					 // scanf is used to take input from user
   printf("Enter The Value Of A[1] : ");
   scanf("%d", &a[1]);

   printf("Enter The Value Of A[2] : ");
   scanf("%d", &a[2]);

   printf("Enter The Value Of A[3] : ");
   scanf("%d", &a[3]);

   printf("Enter The Value Of A[4] : ");
   scanf("%d", &a[4]);



   printf("%d \n", a[0]);
   printf("%d \n", a[1]);
   printf("%d \n", a[2]);   // It Is A Print Statement Here It Is Used To Generate Result
   printf("%d \n", a[3]);
   printf("%d \n", a[4]);


getch(); // This Function Is Used To Hold The Value
clrscr(); // This Function Is Used To Clear The Screen

}