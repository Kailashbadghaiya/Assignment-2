#include<stdio.h>
#include<conio.h>
int main()
{
    float INR,USD;

    printf("convert INR to USD :\n");
    scanf("%f",&INR);

    USD=INR/76.23;
    {
        printf("convert INR=%.2f is USD=%.2f",INR,USD);
    }
    return 0;
}
