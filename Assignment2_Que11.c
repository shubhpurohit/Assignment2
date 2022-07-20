// program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number.
#include<stdio.h>
main()
{
 int n,d,fin;
 printf("Enter an number\n");
 scanf("%d",&n);
 printf("enter a single digit:");
 scanf("%d",&d);
 fin=n*10;
 fin=fin+d;
 printf("the number is%d",fin);
}
