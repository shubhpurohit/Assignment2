#include<stdio.h>
void main()
{
        int a,b,temp;
        scanf("%d%d",&a,&b);
        temp=a;
        a=b;
        b=temp;
    printf("Swapped values are a=%d b=%d",a,b);
}
