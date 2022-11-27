#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,z;

    printf("Enter a number :\n");
    scanf("%d",&x);

    printf("Enter a number :\n");
    scanf("%d",&y);

    z=x;
    x=y;
    y=z;
    {
        printf("swap value of x=%d is y=%d",x,y);
    }
    return 0;
}
