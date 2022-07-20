// program to find the position of first 1 in LSB.

#include<stdio.h>

main()
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    if(n&1==1)
    {
     printf("the last number is one");
    }
    else
    {
    printf("the number is 0");

    }
}
