// program to make the last digit of a number stored in a variable as zero.
#include<stdio.h>
main()
{
    int n,div,fin;
    printf("Enter an number\n");
    scanf("%d",&n);
    div=n/10;
    fin=div*10;
    printf("final value is %d",fin);

}
