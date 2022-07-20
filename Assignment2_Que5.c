#include<stdio.h>
void main()
{
        int a,t1,t2,t3,x1,x2,sum;
        printf("enter the 3 digit number only\n");
        scanf("%d",&a);
        t1=a%10;
        x1=a/10;
        t2=x1%10;
        x2=x1/10;
        t3=x2%10;
        sum=t1+t2+t3;
        printf("%d",sum);
}

