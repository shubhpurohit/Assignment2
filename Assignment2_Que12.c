//program to take the amount in INR and convert it into USD
#include<stdio.h>
main()
{
    float INR;
    float USD;
    printf("Enter amount in INR\n");
    scanf("%f",&INR);
    USD=INR/76.23;
    printf("The amount is USD is =%f $",USD);


}
