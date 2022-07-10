			   // Welcome To My Program
			   // This Is Gross_Salary Calculator


#include<stdio.h>
#include<stdlib.h>

void main()

{
  long long int oth_A[10]; // Here We Declare An Array
  long long int Basic_S,DA_P,HRA_P,NPS_P,Gross_S,i,n,sum=0,DA_R,HRA_R,NPS_R;

  printf("(1) Enter The Value Of Basic_Salary : ");
  scanf("%lld", &Basic_S);

  printf("\n(2) Enter The Value For DA Percentage : ");
  scanf("%lld", &DA_P);

  printf("\n(3) Enter The Value For HRA Percentage : ");
  scanf("%lld", &HRA_P);

  printf("\n(4) Enter The Value For NPS Percentage Add By Govt : ");
  scanf("%lld", &NPS_P);

  printf("\n(5) Enter The Number Of Other Allounces : ");
  scanf("%lld", &n);

  for (i=1;i<=n;i++)

  {
   printf("\n(6) Enter The Value For Other Allounce_%lld : ",i); // Here You Have To Mention The Number Of Other Allounce
   scanf("%lld", &oth_A[i]);
  }


  for (i=1;i<=n;i++)

  {
    sum = sum + oth_A[i];
  }
  printf("Total Of Other Allounce Is : %lld \n", sum);


  DA_R = (Basic_S/100)*DA_P;
  printf("\nDA Is : %lld\n", DA_R);

  HRA_R = (Basic_S/100)*HRA_P;
  printf("\nHRA Is : %lld\n", HRA_R);

  NPS_R = (Basic_S/100)*NPS_P;
  printf("\nNPS Is : %lld\n", NPS_R);


  Gross_S = Basic_S + DA_R + HRA_R + NPS_R + sum;
  printf("\nThe Monthly Gross Salary Is : %lld", Gross_S);

getch();
clrscr();
}
