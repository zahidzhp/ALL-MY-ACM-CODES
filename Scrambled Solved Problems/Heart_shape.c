#include<stdio.h>
#include<conio.h>
int main(void)
{
   int i,j,k;

   for(i=0,k=11;i<=90;i+=10,k+=10)
    {
     printf("\r\t\t\t");
     for(j=i;j<k;j++)
    if((j==13||j==17)||(j>=22&&j<=24)||(j>=26&&j<=28)||(j>=31 && j<=39)||(j>=41&&j<=49)||(j>=52&&j<=58)||(j>=63&&j<=67)||(j>=74&&j<=76)||(j==85))
    {

    printf("*");
    }
    else
    {

    printf(".");
    }
     printf("\n");
    }
   printf("\r\t\t \t  ");
    printf("I Love U\n");
getch();
}
