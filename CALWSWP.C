#include<stdio.h>
#include<stdlib.h>

void main()

{
  int val1; int val2; char op;  int a; int b; int sum; int sub; int mul; int div;



  printf("Select any one operator from: +, -, *, / : ");
  scanf("%c", &op);

  printf("\nEnter the value of a : ");
  scanf("%d", &a);

  printf("enter the value of b : ");
  scanf("%d", &b);


  switch (op)

  {
    case '+':
    sum = a+b;
    printf("\nSum is : %d", sum);
    break;

    case '-':
    sub = a-b;
    printf("\nSub is : %d", sub);
    break;

    case '*':
    mul = a*b;
    printf("\nmul is : %d", mul);
    break;

    case '/':
    div = a/b;
    printf("\ndiv is : %d", div);
    break;

    default:
    printf("Not Valid");

  }

getch();
clrscr();


}



























