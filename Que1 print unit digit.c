#include<stdio.h>
#include<conio.h>
int main()
{
    int x;

    printf("Enter a number\n");
    scanf("%d",&x);
    {
        printf("unit digit of %d is %d",x,x%10);
    }
    return 0;
}
