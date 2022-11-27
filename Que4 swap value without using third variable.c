#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;

    printf("Enter a number :\n");
    scanf("%d",&x);

    printf("Enter a number :\n");
    scanf("%d",&y);

    x=x+y;
    y=x-y;
    x=x-y;
    {
        printf("without using third variable of x=%d is y=%d",x,y);
    }
    return 0;
}
