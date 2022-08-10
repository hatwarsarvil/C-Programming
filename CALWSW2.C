		     //Hello! Welcome To My Program
		     // This Is An Area Calculator



#include<stdio.h>
#include<stdlib.h>

void main()


{
   int a; int b; int l; int h; int r; char area; int C; int T; int S; int
    R; float R1; int R2; int R3; int R4;

    /* C = Circle
       T = Triangle
       S = Square
       R = Rectangle*/



     printf("Select The Area From : C,T,S,R : ");
     scanf("%c", &area);

    switch (area)


   {
       case 'C':
       printf("Enter The Value Of r : ");
       scanf("%d", &r);

       R1 = 3.14*r*r;
       printf("Area is : %f", R1);
       break ;

       case 'T':
       printf("Enter The Value Of b :");
       scanf("%d", &b);
       printf("Enter The Value Of h : ");
       scanf("%d", &h);

       R2 = 0.5*b*h;
       printf("Area Is : %d", R2);
       break ;

       case 'S':
       printf("Enter The Value Of a : ");
       scanf("%d", &a);

       R3 = a*a;
       printf("Area Is : %d", R3);
       break ;

       case 'R':
       printf("Enter The Value Of l : ");
       scanf("%d", &l);
       printf("Enter The Value Of b : ");
       scanf("%d", &b);

       R4 = l*b;
       printf("Area Is : %d", R4);
       break ;

      }

getch();
clrscr();

}