#include<stdio.h>
#include<conio.h>
int main()
{
    int x,sum=0;

    printf("Enter a number :\n");
    scanf("%d",&x);

    sum=x%10;
    x=x/10;
    sum=(x%10)+sum;
    x=x/10;
    sum=x+sum;
    {
        printf("sum of %d",sum);
    }
    return 0;
}
