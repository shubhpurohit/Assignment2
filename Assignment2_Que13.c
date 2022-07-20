//a program to take a three-digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
main()
{
    int n,d,m,right_shift;
    printf("enter an 3 digit number to rotate it");
    scanf("%d",&n);
    right_shift=n>>1;
    d=n/10;
    m=n%10;
    n=d+(m*100);

    printf("The right shift of an number is %d ",right_shift);
    printf("The rotate number is %d",n);
}
