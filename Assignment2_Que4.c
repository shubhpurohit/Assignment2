#include<stdio.h>
void main()
{
        int a,b;
        scanf("%d%d",&a,&b);
        a=a+b;
        b=a-b;
        a=a-b;


    printf("Swapped values are a=%d b=%d",a,b);
}

