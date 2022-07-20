// program to check whether the given number is even or odd using a bitwise operator.


#include<stdio.h>

main()
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    if(n&1==1)
    {
     printf("the number is odd");
    }
    else
    {
    printf("the number is even");

    }
}
